//
//  CharDetector.m
//  chardet
//
//  Created by Albert Park on 7/19/17.
//  Copyright © 2017 Albert Park. All rights reserved.
//

#import "CharDetector.h"
#import "chardet.h"
#import "NSString+chardet.h"

@interface CharDetectObject(){
    DetectObj * detectObj;
}
@end

@implementation CharDetectObject
-(instancetype)initWithRawObject:(DetectObj *)object{
    self = [super init];
    if (self) {
        detectObj = object;
    }
    return self;
}
-(instancetype)initFor:(char*)str{
    self = [super init];
    if (self){
        detectObj = detect_obj_init ();
        NSInteger errorCode = [self detect:str];
        switch (errorCode) {
            case CHARDET_OUT_OF_MEMORY:
                return nil;
                break;
            case CHARDET_NULL_OBJECT :
                return nil;
            default:
                break;
        }
    }
    return self;
}

-(void)dealloc{
    detect_obj_free (&detectObj);
}
-(NSString*)encoding{
    return [NSString stringWithCString:detectObj->encoding encoding:NSUTF8StringEncoding];
}
-(float)confidence{
    return detectObj->confidence;
}

-(NSInteger)detect:(char*)str{
    NSInteger errorCode = detect_r (str, strlen (str), &detectObj);
    return errorCode;
}

+(NSString*)stringForCStr:(char*)str{
    CharDetectObject * instance = [[self alloc] initFor:str];
    NSString * string = [NSString stringWithCString:str withDetectObject:instance];
    return string;
}
@end


@interface CharDetector(){
    Detect * detector;
}
@end
@implementation CharDetector
-(instancetype)init{
    self = [super init];
    if (self){
        detector = detect_init ();
    }
    return self;
}
-(void)dealloc{
    detect_destroy (&detector);
}
-(CharDetectObject*)detect:(char*)str{
    DetectObj * obj;
//    detect_reset (&detector);
    obj = detect_obj_init ();
    NSInteger errorCode = detect_handledata_r (&detector, str, strlen (str), &obj);
    switch (errorCode) {
        case CHARDET_OUT_OF_MEMORY:
            return nil;
            break;
        case CHARDET_NULL_OBJECT :
            return nil;
        default:
            break;
    }
    return [[CharDetectObject alloc] initWithRawObject: obj];
}

-(NSString*)stringForCStr:(char*)c_str{
    CharDetectObject * obj = [self detect:c_str];
    NSString * string = [NSString stringWithCString:c_str withDetectObject:obj];
    return string;
}

-(void)dataend{
    detect_dataend(&detector);
}

-(void)reset{
    detect_reset (&detector);
}

+(NSString*)detector_version{
    return [NSString stringWithCString:detect_version() encoding:NSUTF8StringEncoding];
}
+(NSString*)detector_uversion{
    return [NSString stringWithCString:detect_uversion() encoding:NSUTF8StringEncoding];
}

-(NSArray<NSString*>*)listOfEncodings{
    return nil;
}
@end


