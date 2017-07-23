//
//  CharDetector.h
//  chardet
//
//  Created by Albert Park on 7/19/17.
//  Copyright © 2017 Albert Park. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CharDetectObject : NSObject
-(instancetype)initFor:(char*)str;
-(NSString*)encoding;
-(float)confidence;

+(NSString*)stringForCStr:(char*)str;

@end



@interface CharDetector : NSObject
-(CharDetectObject*)detect:(char*)str;

-(NSString*)stringForCStr:(char*)str;
@end


