//
//  DMDSResultQuality.h
//  DaonDocument
//
//  Created by jdudukovic on 9.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DMDSResultQuality : NSObject

@property double summary;

@property double aspectRatio;

@property double size;

@property double vertDistort;

@property double horizDistort;

@property double minInternalAngle;

@property double maxInternalAngle;

@property double sumInternalAngle;

@property double glareFixed;

@property double localBlur;

@property double sourceWidth;

@property double sourceHeight;

@property double sourceDPI;

- (NSString*) description;

@end

