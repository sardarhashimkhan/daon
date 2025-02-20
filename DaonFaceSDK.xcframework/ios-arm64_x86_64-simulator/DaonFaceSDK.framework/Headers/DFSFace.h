//
//  DFSFace.h
//  DaonFaceSDK
//
//  Created by Jonny Mortensen on 8/23/19.
//  Copyright © 2019 Daon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <DaonFaceSDK/DFSQualityResult.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 @brief Single image analysis result
 */
@interface DFSFace : NSObject

/*!
 @brief Face image
 */
@property (nonatomic, readonly) UIImage * image;

/*!
 @brief Face image quality result
 */
@property (nonatomic, readonly) DFSQualityResult * quality;

/*!
 @brief Face rotation
 */
@property (nonatomic, readonly) UIImageOrientation rotation;

/*!
 @brief Face score
 */
@property (nonatomic, readonly) float score;

- (id) initWithImage:(UIImage*)image quality:(DFSQualityResult*)quality rotation:(UIImageOrientation)rotation;
@end

NS_ASSUME_NONNULL_END
