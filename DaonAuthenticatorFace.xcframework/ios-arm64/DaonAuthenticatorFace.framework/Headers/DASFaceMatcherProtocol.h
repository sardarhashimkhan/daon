//
//  DASFaceMatcherProtocol.h
//  DaonAuthenticatorFace
//
//  Created by Neil Johnston on 3/27/19.
//  Copyright © 2019 Daon. All rights reserved.
//

#ifndef DASFaceMatcherProtocol_h
#define DASFaceMatcherProtocol_h

// Forward declarations
@class DaonFaceSDK;

// Blocks

/*!
 @typedef DASFaceMatcherEnrollCompletion
 @brief Block that is used to notify a calling object that a face enrollment has completed.
 @param error An error if the enrollment failed, otherwise nil.
 */
typedef void (^DASFaceMatcherEnrollCompletion) (NSError *error);

/*!
 @typedef DASFaceMatcherVerifyCompletion
 @brief Block that is used to notify a calling object that a face verification has completed.
 @param error An error if the verification failed, otherwise nil.
 @param score The match score.
 */
typedef void (^DASFaceMatcherVerifyCompletion) (NSError *error, float score);


/*!
 @brief A protocol for classes that wish to provide face registration and authentication functionality.
 */
@protocol DASFaceMatcherProtocol <NSObject>

// Face SDK
- (DaonFaceSDK*) createFaceSDK;

// Enrollment / Verification
- (void) enrollImage:(UIImage*)image
         orientation:(UIImageOrientation)orientation
          completion:(DASFaceMatcherEnrollCompletion)completionBlock;

- (void) verifyImage:(UIImage*)image
         orientation:(UIImageOrientation)orientation
          completion:(DASFaceMatcherVerifyCompletion)completionBlock;

// Thresholds
- (float) defaultMatchThreshold;

@end

#endif /* DASFaceMatcherProtocol_h */
