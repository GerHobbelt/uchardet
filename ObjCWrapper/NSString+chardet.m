//
//  NSString+chardet.m
//  chardet
//
//  Created by Albert Park on 7/23/17.
//  Copyright © 2017 Albert Park. All rights reserved.
//

#import "NSString+chardet.h"
#import "CharDetector.h"

const NSUInteger encodings[] = {
    NSASCIIStringEncoding,
    NSNEXTSTEPStringEncoding,
    NSJapaneseEUCStringEncoding,
    NSUTF8StringEncoding,
    NSISOLatin1StringEncoding,
    NSSymbolStringEncoding,
    NSNonLossyASCIIStringEncoding,
    NSShiftJISStringEncoding,          /* kCFStringEncodingDOSJapanese */
    NSISOLatin2StringEncoding,
    NSUnicodeStringEncoding,
    NSWindowsCP1251StringEncoding,    /* Cyrillic; same as AdobeStandardCyrillic */
    NSWindowsCP1252StringEncoding,    /* WinLatin1 */
    NSWindowsCP1253StringEncoding,    /* Greek */
    NSWindowsCP1254StringEncoding,    /* Turkish */
    NSWindowsCP1250StringEncoding,    /* WinLatin2 */
    NSISO2022JPStringEncoding,        /* ISO 2022 Japanese encoding for e-mail */
    NSMacOSRomanStringEncoding,
    NSUTF16StringEncoding,      /* An alias for NSUnicodeStringEncoding */
    NSUTF16BigEndianStringEncoding,          /* NSUTF16StringEncoding encoding with explicit endianness specified */
    NSUTF16LittleEndianStringEncoding,       /* NSUTF16StringEncoding encoding with explicit endianness specified */
    NSUTF32StringEncoding,
    NSUTF32BigEndianStringEncoding,          /* NSUTF32StringEncoding encoding with explicit endianness specified */
    NSUTF32LittleEndianStringEncoding,        /* NSUTF32StringEncoding encoding with explicit endianness specified */
    kCFStringEncodingMacRoman,
    kCFStringEncodingWindowsLatin1, /* ANSI codepage 1252 */
    kCFStringEncodingISOLatin1, /* ISO 8859-1 */
    kCFStringEncodingNextStepLatin, /* NextStep encoding*/
    kCFStringEncodingASCII, /* 0..127 (in creating CFString, values greater than 0x7F are treated as corresponding Unicode value) */
    kCFStringEncodingUnicode, /* kTextEncodingUnicodeDefault  + kTextEncodingDefaultFormat (aka kUnicode16BitFormat) */
    kCFStringEncodingUTF8, /* kTextEncodingUnicodeDefault + kUnicodeUTF8Format */
    kCFStringEncodingNonLossyASCII, /* 7bit Unicode variants used by Cocoa & Java */
    kCFStringEncodingUTF16, /* kTextEncodingUnicodeDefault + kUnicodeUTF16Format (alias of kCFStringEncodingUnicode) */
    kCFStringEncodingUTF16BE, /* kTextEncodingUnicodeDefault + kUnicodeUTF16BEFormat */
    kCFStringEncodingUTF16LE, /* kTextEncodingUnicodeDefault + kUnicodeUTF16LEFormat */
    kCFStringEncodingUTF32, /* kTextEncodingUnicodeDefault + kUnicodeUTF32Format */
    kCFStringEncodingUTF32BE, /* kTextEncodingUnicodeDefault + kUnicodeUTF32BEFormat */
    kCFStringEncodingUTF32LE
};

@implementation NSString (chardet)


-(instancetype)initWithCString:(const char *)nullTerminatedCString withDetectObject:(CharDetectObject *)detect{
    self = [self init];
    if (self) {
        if (detect == nil) {
            detect = [[CharDetectObject alloc] initFor:(char *)nullTerminatedCString];
        }
        
        if ( [detect.encoding isEqualToString:@"ASCII"] ) {
            self = [self initWithCString:nullTerminatedCString encoding:NSASCIIStringEncoding];
        }else if( [detect.encoding isEqualToString:@"ISO-8859-1"] ){
            self = [self initWithCString:nullTerminatedCString encoding:kCFStringEncodingISOLatin1];
        }else if( [detect.encoding isEqualToString:@"UTF-16LE"] ){
            self = [self initWithCString:nullTerminatedCString encoding:kCFStringEncodingUTF16LE];
        }else if( [detect.encoding isEqualToString:@"UTF-32LE"] ){
            self = [self initWithCString:nullTerminatedCString encoding:kCFStringEncodingUTF32LE];
        }else if( [detect.encoding isEqualToString:@"X-ISO-10646-UCS-4-2143"] ){// non of matchign
            self = [self initWithCString:nullTerminatedCString encoding:NSASCIIStringEncoding];
        }else if( [detect.encoding isEqualToString:@"UTF-32BE"] ){
            self = [self initWithCString:nullTerminatedCString encoding:kCFStringEncodingUTF32BE];
        }else if( [detect.encoding isEqualToString:@"UTF-16BE"] ){
            self = [self initWithCString:nullTerminatedCString encoding:kCFStringEncodingUTF16BE];
        }else if( [detect.encoding isEqualToString:@"X-ISO-10646-UCS-4-3412"] ){// non of matchign
            self = [self initWithCString:nullTerminatedCString encoding:NSASCIIStringEncoding];
        }else if( [detect.encoding isEqualToString:@"UTF-8"] ){
            self = [self initWithCString:nullTerminatedCString encoding:NSUTF8StringEncoding];
        }else if( [detect.encoding isEqualToString:@"EUC-JP"] ){
            self = [self initWithCString:nullTerminatedCString encoding:NSJapaneseEUCStringEncoding];
        }else if( [detect.encoding isEqualToString:@"EUC-KR"] ){// non of matchign
            self = [self initWithCString:nullTerminatedCString encoding:NSASCIIStringEncoding];
        }else if( [detect.encoding isEqualToString:@"EUC-TW"] ){// non of matchign
            self = [self initWithCString:nullTerminatedCString encoding:NSASCIIStringEncoding];
        }
        
        if (self == nil) {
            self = [self tryOtherEncoding:nullTerminatedCString];
        }
    }
    return self;
}

-(NSString*)tryOtherEncoding:(const char *)nullTerminatedCString{
    int count = sizeof(encodings)/sizeof(NSUInteger);
    NSString * encoding = nil;
    for(int i = 0; i < count; i++){
        encoding = [self initWithCString:nullTerminatedCString encoding:i];
        if (encoding != nil) {
            break;
        }
    }
    return encoding;
}
@end
