
#import <Foundation/Foundation.h>

/*!
 @unsorted
 @abstract Contains all possible document types that may be used when initialising the scaning options (see documentTypes in @link DMDSOptions.h DMDSOptions @/link).
 */
@interface DMDSDocumentTypes : NSObject

/*! Generic Id Document */
extern NSString *const kIdDocument;
extern NSString *const kIdDocumentCombined;

/*!
 Edge Detection (this will capture any document by searching for a rectangle's edges). No OCR will be performed.
 
 Note - this should not be used with any other document type.
 */
extern NSString *const kEdgeDetection;
extern NSString *const kEdgeDetection_A4;
extern NSString *const kEdgeDetection_A4_Landscape;
extern NSString *const kEdgeDetection_A4_Portrait;
extern NSString *const kEdgeDetection_ID1;
extern NSString *const kEdgeDetection_ID2;
extern NSString *const kEdgeDetection_ID3;
extern NSString *const kEdgeDetection_Custom;

/*! Passport */
extern NSString *const kPassport;

/*! MRZ readable documents */
extern NSString *const kMrz;

/*! Barcode readable documents */
extern NSString *const kIdBarcodeDocument;

@end
