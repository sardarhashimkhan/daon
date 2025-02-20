//
//  DMDSFaceQualityAnalyzeStatus.h
//  DaonDocument
//
//  Created by jdudukovic on 18.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#ifndef DMDSFaceQualityAnalyzeStatus_h
#define DMDSFaceQualityAnalyzeStatus_h

/*!
 @abstract Status of Face Quality check
 @constant DMDSStatusFaceNotFound We couldn't find face on document
 @constant DMDSStatusFaceQualityFailed Face was found on document but did not pass thresholds
 @constant DMDSStatusFaceQualityOk Face was found on document and pass thresholds
 */
typedef NS_ENUM (NSInteger, DMDSFaceQualityAnalyzeStatus) {
    DMDSFaceStatusNotFound      = 0,
    DMDSFaceStatusQualityFailed = 1,
    DMDSFaceStatusOk            = 2
};

#endif /* DMDSFaceQualityAnalyzeStatus_h */

