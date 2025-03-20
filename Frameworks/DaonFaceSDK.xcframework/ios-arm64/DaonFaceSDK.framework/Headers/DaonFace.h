//
//  DaonFace.h
//  DaonFaceSDK
//
//  Copyright © 2015-25 Daon. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

#import <DaonFaceSDK/DFSEnrollDelegate.h>
#import <DaonFaceSDK/DFSRecognitionDelegate.h>
#import <DaonFaceSDK/DFSAnalysisDelegate.h>
#import <DaonFaceSDK/DFSAnalyzerProtocol.h>
#import <DaonFaceSDK/DFSRecognizerProtocol.h>
#import <DaonFaceSDK/DFSFace.h>

static const CGFloat DFSVideoOrientationPortrait           = 90;
static const CGFloat DFSVideoOrientationPortraitUpsideDown = 270;
static const CGFloat DFSVideoOrientationLandscapeRight     = 180;
static const CGFloat DFSVideoOrientationLandscapeLeft      = 0;

/*!
 @brief SDK Interface for liveness detection, verification and/or quality measures.
 */
@interface DaonFaceSDK : NSObject

@property (nonatomic, readonly) NSString * license;
@property (nonatomic, readonly) NSString * organization;
@property (nonatomic, readonly) NSDictionary * extensions;

@property (nonatomic, assign) BOOL currentFrameInResult DEPRECATED_MSG_ATTRIBUTE("Ignored. Always true");

typedef NS_OPTIONS(NSUInteger, DFSAnalysisOption) {
    DFSAnalysisOptionFirst                  = 0x01,
    DFSAnalysisOptionSearchAllOrientations  = 0x02,
    DFSAnalysisOptionICAO                   = 0x05,          // 0x04 + DFSAnalysisOptionFirst
    DFSAnalysisOptionHighAccuracy           = 0x08,
    DFSAnalysisOptionOptimizeScanRegion     = 0x10,
};

/*!
 @functiongroup Initialisation
 */

/*!
 @brief Initialises a new instance.
 @param license The license data. If the license string is nil, the SDK will look in the main bundle for a license.txt file.
 @result A new instance ready to be use for analysis / verification.
 */
- (id) initWithLicense:(NSString*)license;

- (id) initWithRecognizer:(id<DFSRecognizerProtocol>)recognizer license:(NSString*)license;

/*!
 @functiongroup Version Information
 */

/*!
 @brief Get version.
 */
- (NSString*) version;

/*!
 @functiongroup Configuration
 */

/*!
 @brief Add analyzer. Returns true if successfull.
 */
- (BOOL) addAnalyzer:(id<DFSAnalyzerProtocol>)analyzer NS_SWIFT_NAME(add(analyzer:));

/*!
 @brief Remove analyzer.
 */
- (void) removeAnalyzer:(id<DFSAnalyzerProtocol>)analyzer NS_SWIFT_NAME(remove(analyzer:));


/*!
 @brief Set configuration.
 @description Provides a means of passing customization parameters such as Head Movement threshold to the SDK
 via a dictionary of key-value pairs (See "Configuration keys"). Ideally this method should be used after
 initWithOptions: is called but before any image is passed to an enroll/analyze method.
 @param configuration The new configuration
 */
- (void) setConfiguration:(NSDictionary*)configuration;


/*!
 @functiongroup Processing - Single image
 */

/*
 @brief Create a matching template for an image.
 @description This method is currently only supported when using the DaonFaceMatcher module.
 @param image A UIImage object.
 @param error An error object
 */
- (NSData*) templateWithImage:(UIImage*)image error:(NSError**)error;

/*
 @brief Create a matching template for an image.
 @description This method is currently only supported when using the DaonFaceMatcher module.
 @param buffer A CVPixelBufferRef
 @param error An error object
 */
- (NSData*) templateWithPixelBuffer:(CVPixelBufferRef)buffer error:(NSError **)error;


/*
 @brief Create a matching template for an image.
 @description This method is currently only supported when using the DaonFaceMatcher module.
 @param buffer A CVPixelBufferRef
 @param orientation The video rotation angle
 @param error An error object
 */
- (NSData*) templateWithPixelBuffer:(CVPixelBufferRef)buffer
                        orientation:(CGFloat)orientation
                              error:(NSError **)error;

- (float) matchWithImage:(UIImage*)image imageTemplate:(NSData*)tmplate error:(NSError**)error;
- (float) matchTemplate:(NSData*)authTemplate withTemplate:(NSData*)registeredTemplate error:(NSError**)error;


- (DFSResult*) analyzeSingleImage:(UIImage*)image;

- (NSArray<DFSFace*>*) analyzeFacesInImage:(UIImage*)image
                                   options:(DFSAnalysisOption)options NS_SWIFT_NAME(analyzeFaces(image:options:));

/*!
 @functiongroup Processing - Image from video steam
 */

/*!
 @brief Analyzes an image buffer from a video stream.
 @param buffer The CVPixelBufferRef to analyze.
 @param completion The completionblock  that will be called back with the result of the analysis.
 */
- (void) analyzePixelBuffer:(CVPixelBufferRef)buffer completion:(void (^)(DFSResult *result))completion;

/*!
 @brief Analyzes an image buffer from a video stream.
 @param buffer The CVPixelBufferRef to analyze.
 @param orientation The video rotation angle..
 @param queue The dispatch queue the completion block is called on.
 @param completion The completionblock  that will be called back with the result of the analysis.
 */
- (void) analyzePixelBuffer:(CVPixelBufferRef)buffer
                orientation:(CGFloat)orientation
                      queue:(dispatch_queue_t)queue
                 completion:(void (^)(DFSResult *result))completion;


/*!
 @brief Analyzes an image buffer from a video stream.
 @param buffer The CVPixelBufferRef to analyze.
 @param delegate The DFSLivenessAnalysisDelegate delegate that will be called back with the result of the analysis.

 */
- (void) analyzePixelBuffer:(CVPixelBufferRef)buffer
                   delegate:(id<DFSLivenessAnalysisDelegate>)delegate;

/*!
 @functiongroup Control
 */

/*!
 @brief Stop and release resources.
 */
- (void) stop;

/*!
 @brief Start after a stop or reset.
 */
- (void) start DEPRECATED_MSG_ATTRIBUTE("Use reset");

/*!
 @brief Reset and clear enrolled data.
 */
- (void) reset;

@end
