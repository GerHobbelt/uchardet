//
//  NSString+chardet.h
//  chardet
//
//  Created by Albert Park on 7/23/17.
//  Copyright © 2017 Albert Park. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CharDetectObject;

@interface NSString (chardet)
+(instancetype)stringWithCString:(const char *)nullTerminatedCString withDetectObject:(CharDetectObject *)detect;

@end
