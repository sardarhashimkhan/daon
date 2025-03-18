
#import <UIKit/UIKit.h>
#import <AvailabilityMacros.h>
#import "DMDSResult.h"
#import "DMDSRecognitionMode.h"
#import "DMDSFaceExtractionProvider.h"

@class DMDSQuadrangle;
@class DMDSOptions;
@class DMDSExtensionFactors;
@class DMDSFace;

/*!
 @abstract This is a utilities class that contains methods that may be of use to an application integrating with this framework.
 */
@interface DMDSUtilities : NSObject

// MARK: - Images

/*!
 @abstract  Crop an image based on specific coordinates.
 @param     originalImage   Original image to crop. Ensure the image orientation matches the coordinates.
 @param     coordinates     Coordinates to crop the image. These must be in pixels, based on the top left corner of the original image.
 @return    Cropped image.
 */
+ (UIImage*) cropImage:(UIImage*)originalImage withCoordinates:(DMDSQuadrangle*)coordinates;

/// Crop image by adding coordinates of desired cropping area and percentage of increasing that area if needed.
/// @param originalImage Image that needs to be cropped
/// @param topLeft top left coordinate
/// @param topRight top right coordinate
/// @param bottomRight bottom right coordinate
/// @param bottomLeft bottom left coordinate
/// @param percentage float value of increase percentage
/// @return Cropped image with increasing percentage.
+ (UIImage*) cropImageWithFourCoordinates:(UIImage*)originalImage
                                  topLeft:(CGPoint)topLeft
                                 topRight:(CGPoint)topRight
                              bottomRight:(CGPoint)bottomRight
                               bottomLeft:(CGPoint)bottomLeft
                               percentage:(float)percentage;

/*!
 @abstract  Add a pixel border around an image.
            This is being used when returning the processed document image in order to work with the server-side processing.
 @param     image   The original image to add the padding to.
 @return    Padded image.
 */
+ (UIImage*) padImageForServerProcessing:(UIImage*)image
                         forDocumentType:(NSString*)documentType
                             paddingSize:(int)paddingSize;

+ (UIImage*) rotateImage:(UIImage*)image degrees:(float)degrees;

+ (UIImage*) adjustDocumentOrientation:(UIImage*)processedImage
                              withFace:(DMDSFace*)face
                            orientation:(int)orientation;

// MARK: - Document Types

+ (NSArray<NSString*>*) getAvailableDocumentTypes;

// MARK: - Document Capabilities

+ (BOOL) containsEdgeDetection:(DMDSOptions*)options;

+ (BOOL) requiresPortraitScanRegion:(DMDSOptions*)options;

+ (BOOL) isCombinedScanDocument:(DMDSOptions*)options;

+ (BOOL) includesFaceImage:(DMDSOptions*)options;

+ (BOOL) ignoreDocumentFaceExtraction:(DMDSOptions*)options;

+ (DMDSFaceExtractionProvider) faceExtractionProvider:(DMDSOptions*)options result:(NSObject*)result;

// MARK: - Document Checks

+ (DMDSRecognitionMode) mapToDMDSRecognitionMode:(int)recognitionMode;

// MARK: - Localization

+ (NSString*) localise:(NSString*)key;

// MARK: - Sizing

+ (double) getSizeInMBForImage:(UIImage*)image withName:(NSString*)name;

+ (double) getSizeInMBForData:(NSData*)image withName:(NSString*)name;

// MARK: - Arrays

+ (float) getMaxFloatFromArray:(NSArray<NSNumber*>*)floatArray;

// MARK: - Debugging

+ (void) writeUImageToDocuments:(UIImage*)image;

@end
