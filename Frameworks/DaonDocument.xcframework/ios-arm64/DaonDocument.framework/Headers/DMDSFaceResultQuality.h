//
//  DMDSFaceQuality.h
//  DaonDocument
//
//  Created by jdudukovic on 25.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DMDSFace;
/*!
 @abstract Represents the quality info about the face extracted from the scanned document.
 */
@interface DMDSFaceResultQuality : NSObject

@property (nonatomic, assign) int faceRotation;
@property (nonatomic, assign) double faceFoundConfidence;
@property (nonatomic, assign) double eyesFoundConfidence;
@property (nonatomic, assign) double eyesOpenConfidence;
@property (nonatomic, assign) double uniformLightingConfidence;
@property (nonatomic, assign) double faceFrontalConfidence;
@property (nonatomic, assign) int eyeDistance;
@property (nonatomic, assign) int poseAngle;
@property (nonatomic, assign) int sharpness;
@property (nonatomic, assign) int exposure;
@property (nonatomic, assign) int grayscaleDensity;
@property (nonatomic, assign) double globalScore;

/*!
 @abstract  Initializer with quality measures from FaceQualitySDK
 */
- (instancetype) initWithQualityMeasures:(NSDictionary*)qualityMeasures;

/*!
 @abstract Return the description of the relevant properties of this object at runtime for debugging purposes.
 */
- (NSString*) description;

@end
