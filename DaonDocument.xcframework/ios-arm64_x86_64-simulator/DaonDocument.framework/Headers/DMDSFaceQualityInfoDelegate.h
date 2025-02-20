//
//  DMDSFaceQualityCheckDelegate.h
//  DaonDocument
//
//  Created by jdudukovic on 18.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#ifndef DMDSFaceQualityInfoDelegate_h
#define DMDSFaceQualityInfoDelegate_h

#import <Foundation/Foundation.h>
#import "DMDSFaceQualityInfo.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @abstract Protocol for obtaining failed Face quality status
 */
__attribute__((deprecated("DMDSFaceQualityInfoDelegate is deprecated and will be removed in a future release.")));
@protocol DMDSFaceQualityInfoDelegate <NSObject>

/*!
 @abstract Called when the face was not found on the document

 @param faceQualityInfo - information on face analysis
 */
- (void) faceQualityInfo:(DMDSFaceQualityInfo*)faceQualityInfo __attribute__((deprecated("faceQualityInfo: is deprecated and will be removed in a future release.")));

@end

NS_ASSUME_NONNULL_END

#endif /* DMDSFaceQualityCheckDelegate_h */
