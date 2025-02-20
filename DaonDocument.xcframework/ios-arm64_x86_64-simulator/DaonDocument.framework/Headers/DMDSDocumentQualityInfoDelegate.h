//
//  DMDSDocumentQualityCheckDelegate.h
//  DaonDocument
//
//  Created by jdudukovic on 18.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#ifndef DMDSDocumentQualityInfoDelegate_h
#define DMDSDocumentQualityInfoDelegate_h

#import <Foundation/Foundation.h>
#import "DMDSDocumentQualityInfo.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @abstract Protocol for obtaining Quality check results
 */
__attribute__((deprecated("DMDSDocumentQualityInfoDelegate is deprecated and will be removed in a future release.")));
@protocol DMDSDocumentQualityInfoDelegate <NSObject>

/*!
 @abstract Called when we discard frame due to failing quality check

 @param documentQualityInfo - info on document quality analysis
 */
- (void) documentQualityInfo:(DMDSDocumentQualityInfo*)documentQualityInfo __attribute__((deprecated("documentQualityInfo: is deprecated and will be removed in a future release.")));
                     
@end

NS_ASSUME_NONNULL_END

#endif /* DMDSDocumentQualityInfoDelegate_h */
