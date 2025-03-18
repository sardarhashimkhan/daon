
#import <UIKit/UIKit.h>
#import "DMDSFaceResultQuality.h"

/*!
 @abstract Represents the face extracted from the scanned document.
 */
@interface DMDSFace : NSObject

/*!
 @abstract The face image extracted from the scanned document.
 */
@property (nonatomic, strong) UIImage* faceImage;

/*!
 @abstract The quality score for the face image extracted from the scanned document.
 */
@property (nonatomic, strong) DMDSFaceResultQuality* qualityData;

/*!
 @internal
 @abstract Initialise a DMDSFace object.
 @return A new DMDSFace object.
 @discussion This is primarily for internal framework usage.
 */
- (id) initWithImage:(UIImage*)faceImage qualityData:(DMDSFaceResultQuality*)qualityData;

/*!
 @abstract Return the description of the relevant properties of this object at runtime for debugging purposes.
 */
- (NSString*) description;

@end
