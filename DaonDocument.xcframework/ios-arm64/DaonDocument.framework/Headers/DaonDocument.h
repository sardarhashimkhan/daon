
/*!
 @abstract DaonDocument SDK master include for all classes.
 */

#import <UIKit/UIKit.h>

// Capture Manager
#import <DaonDocument/DMDSCaptureManager.h>
#import <DaonDocument/DMDSDocumentAnalyzer.h>

// Protocols
#import <DaonDocument/DMDSCustomScanDelegate.h>
#import <DaonDocument/DMDSDefaultScanDelegate.h>
#import <DaonDocument/DMDSDirectScanDelegate.h>
#import <DaonDocument/DMDSFaceQualityInfoDelegate.h>
#import <DaonDocument/DMDSDocumentQualityInfoDelegate.h>

// Options
#import <DaonDocument/DMDSOptions.h>

// Utilities
#import <DaonDocument/DMDSUtilities.h>

// Models
#import <DaonDocument/DMDSError.h>
#import <DaonDocument/DMDSDocumentDetectionMetadata.h>
#import <DaonDocument/DMDSDocumentCaptureType.h>
#import <DaonDocument/DMDSDocumentDetectionStatus.h>
#import <DaonDocument/DMDSDewarpPolicy.h>
#import <DaonDocument/DMDSDocument.h>
#import <DaonDocument/DMDSResult.h>
#import <DaonDocument/DMDSDocumentTypes.h>
#import <DaonDocument/DMDSRecognitionMode.h>
#import <DaonDocument/DMDSVideoResolution.h>
#import <DaonDocument/DMDSDefaultUIOptions.h>
#import <DaonDocument/DMDSExtensionFactors.h>
#import <DaonDocument/DMDSFace.h>
#import <DaonDocument/DMDSQuadrangle.h>
#import <DaonDocument/DMDSResultQuality.h>
#import <DaonDocument/DMDSMetadataProvider.h>
#import <DaonDocument/DMDSFaceQualityAnalyzeStatus.h>
#import <DaonDocument/DMDSDocumentQualityInfoDelegate.h>
#import <DaonDocument/DMDSFaceQualityInfoDelegate.h>
#import <DaonDocument/DMDSResultQuality.h>
#import <DaonDocument/DMDSMetadataProvider.h>
#import <DaonDocument/DMDSFaceQualityAnalyzeStatus.h>
#import <DaonDocument/DMDSDocumentQualityInfoDelegate.h>
#import <DaonDocument/DMDSFaceQualityInfoDelegate.h>
#import <DaonDocument/DMDSDocumentQualityInfo.h>
#import <DaonDocument/DMDSFaceQualityInfo.h>
#import <DaonDocument/DMDSStrictnessLevel.h>

@interface DaonDocument : NSObject

/*!
 @abstract Get the current version of this framework.
 @return String representation of the version of this framework.
 */
+ (NSString * _Nonnull)version;

@end
