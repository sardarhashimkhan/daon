//
//  DMDSDocumentDetectionStatus.h
//  DaonDocument
//
//  Created by johnstonn on 9/10/24.
//  Copyright © 2024 Daon. All rights reserved.
//

#ifndef DMDSDocumentDetectionStatus_h
#define DMDSDocumentDetectionStatus_h

/*!
 @abstract A list of all possible document detection feedback types, i.e feedback to the app user on the current scan process.
 @constant DMDSDocumentDetectionStatusTilted The document is tilted inside the scanning area. Align the document with the scanning area.
 @constant DMDSDocumentDetectionStatusDoesNotFillScanningArea The document doesn't fill the scanning area. Move the document closer.
 @constant DMDSDocumentDetectionStatusTooCloseToEdge The document is too close to the edge of the scanning region. Move the document away from the edge.
 @constant DMDSDocumentDetectionStatusTooCloseToCamera The document is too close to the edge of the camera. Move the document further back.
 @constant DMDSDocumentDetectionStatusBlurDetected Blur detected on the document.
 @constant DMDSDocumentDetectionStatusGlareDetected Glare detected on the document.
 @constant DMDSDocumentDetectionStatusWrongSideDetected The wrong document side was detection. Flip the document over.
 @constant DMDSDocumentDetectionStatusFaceNotFound The face is not visible on the document.
 @constant DMDSDocumentDetectionStatusQualityFailed Quality analysis has failed for the document.
 @constant DMDSDocumentDetectionStatusFaceQualityFailed Face quality analysis has failed for the document.
 @constant DMDSDocumentDetectionStatusNoError No issues were found with the last frame or during the aggregation time period.
 */
typedef NS_ENUM (NSInteger, DMDSDocumentDetectionStatus) {
    DMDSDocumentDetectionStatusTilted = 0,
    DMDSDocumentDetectionStatusDoesNotFillScanningArea,
    DMDSDocumentDetectionStatusDocumentTooCloseToEdge,
    DMDSDocumentDetectionStatusDocumentTooCloseToCamera,
    DMDSDocumentDetectionStatusBlurDetected,
    DMDSDocumentDetectionStatusGlareDetected,
    DMDSDocumentDetectionStatusWrongSideDetected,
    DMDSDocumentDetectionStatusFaceNotFound,
    DMDSDocumentDetectionStatusDocumentQualityFailed,
    DMDSDocumentDetectionStatusFaceQualityFailed,
    DMDSDocumentDetectionStatusNoError
};

#endif /*DMDSDocumentDetectionStatus_h */
