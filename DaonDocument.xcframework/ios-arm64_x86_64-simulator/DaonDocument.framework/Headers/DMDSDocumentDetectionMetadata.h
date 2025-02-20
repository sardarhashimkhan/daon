
#import <UIKit/UIKit.h>

@class DMDSQuadrangle;

/*!
 @abstract Represents the location of a document detected.
 */
@interface DMDSDocumentDetectionMetadata : NSObject

/*!
 @abstract  Exact location of the document detected within scanning region.
            Contains the coordinates to the 4 corners of the detected document in the coordinate system of the device screen.
 */
@property (nonatomic, strong) DMDSQuadrangle* detectionLocation;

/*!
 @abstract  Exact location of the document detected within the full image.
            Contains the coordinates to the 4 corners of the detected document in the coordinate system of UIImage.
 */
@property (nonatomic, strong) DMDSQuadrangle* inImageDetectionLocation;

/*!
 @abstract  Whether or not the detected documented fills the scanning area.
            Based on DMDSOptions scanningRegionFillPercent property.
 */
@property (nonatomic) BOOL documentFillsScanningArea;

/*!
 @abstract Whether or not the detected document is tilted beyond the tilt limit. Based on DMDSOptions minTiltAngle and maxTiltAngle values.
 */
@property (nonatomic) BOOL documentTilted;

/*!
 @abstract Whether of not the detected document is too close to the camera edge. Based on DMDSOptions paddingEdge value.
 */
@property (nonatomic) BOOL documentTooCloseToEdge;

/*!
 @abstract Whether of not the camera is too close to the detected document. Based on DMDSOptions paddingEdge value.
 */
@property (nonatomic) BOOL documentTooCloseToCamera;

/*!
 @abstract Whether of not the wrong side of the document has been scanned.
 */
@property (nonatomic) BOOL documentWrongSideDetected;

/*!
 @abstract Whether a face was not detected in the document.
 */
@property (nonatomic) BOOL faceNotFound;

/*!
 @abstract Whether of not there is too much glare on the camera frame.
 */
@property (nonatomic) BOOL glareDetected;

/*!
 @abstract Whether of not the camera frame is too blurry.
 */
@property (nonatomic) BOOL blurDetected;

/*!
 @abstract Return the description of the relevant properties of this object at runtime for debugging purposes.
 */
- (NSString*)description;

@end
