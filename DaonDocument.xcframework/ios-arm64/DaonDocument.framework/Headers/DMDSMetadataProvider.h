//
//  DMDSDelegateProvider.h
//  DaonDocument
//
//  Created by jdudukovic on 18.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#ifndef DMDSDelegateProvider_h
#define DMDSDelegateProvider_h

#import <Foundation/Foundation.h>

#import "DMDSDocumentQualityInfoDelegate.h"
#import "DMDSFaceQualityInfoDelegate.h"

__attribute__((deprecated("DMDSMetadataProvider is deprecated and will be removed in a future release.")));
@interface DMDSMetadataProvider : NSObject
 
@property (nonatomic, weak, nullable) id<DMDSDocumentQualityInfoDelegate> documentQualityInfoDelegate __attribute__((deprecated("documentQualityInfoDelegate: is deprecated and will be removed in a future release.")));
@property (nonatomic, weak, nullable) id<DMDSFaceQualityInfoDelegate> faceQualityInfoDelegate __attribute__((deprecated("faceQualityInfoDelegate: is deprecated and will be removed in a future release.")));

@end
 
#endif /* DMDSDelegateProvider_h */
