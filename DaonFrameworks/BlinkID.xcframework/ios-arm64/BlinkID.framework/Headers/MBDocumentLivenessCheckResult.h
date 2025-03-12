// Created by Toni Krešo on 26.07.2023.. 
// Copyright (c) 2023 Microblink Ltd. All rights reserved.

// ANY UNAUTHORIZED USE OR SALE, DUPLICATION, OR DISTRIBUTION 
// OF THIS PROGRAM OR ANY OF ITS PARTS, IN SOURCE OR BINARY FORMS, 
// WITH OR WITHOUT MODIFICATION, WITH THE PURPOSE OF ACQUIRING 
// UNLAWFUL MATERIAL OR ANY OTHER BENEFIT IS PROHIBITED! 
// THIS PROGRAM IS PROTECTED BY COPYRIGHT LAWS AND YOU MAY NOT 
// REVERSE ENGINEER, DECOMPILE, OR DISASSEMBLE IT.

#import "MBMicroblinkDefines.h"
#import "MBTieredCheck.h"
#import "MBCheckResult.h"

NS_ASSUME_NONNULL_BEGIN

MB_CLASS_AVAILABLE_IOS(13.0)
@interface MBDocumentLivenessCheckSingleSideResult : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithScreenCheck:(MBTieredCheck *)screenCheck photocopyCheck:(MBTieredCheck *)photocopyCheck handPresenceCheck:(MBCheckResult)handPresenceCheck NS_DESIGNATED_INITIALIZER;

@property (nonatomic, readonly) MBTieredCheck *screenCheck;
@property (nonatomic, readonly) MBTieredCheck *photocopyCheck;
@property (nonatomic, readonly) MBCheckResult handPresenceCheck;

@end

MB_CLASS_AVAILABLE_IOS(13.0)
@interface MBDocumentLivenessCheckResult : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithFront:(MBDocumentLivenessCheckSingleSideResult *)front back:(MBDocumentLivenessCheckSingleSideResult *)back NS_DESIGNATED_INITIALIZER;

@property (nonatomic, readonly) MBDocumentLivenessCheckSingleSideResult *front;
@property (nonatomic, readonly) MBDocumentLivenessCheckSingleSideResult *back;

@end

NS_ASSUME_NONNULL_END

