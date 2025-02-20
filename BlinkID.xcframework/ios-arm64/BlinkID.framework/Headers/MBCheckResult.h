// Created by Toni Krešo on 26.07.2023.. 
// Copyright (c) 2023 Microblink Ltd. All rights reserved.

// ANY UNAUTHORIZED USE OR SALE, DUPLICATION, OR DISTRIBUTION 
// OF THIS PROGRAM OR ANY OF ITS PARTS, IN SOURCE OR BINARY FORMS, 
// WITH OR WITHOUT MODIFICATION, WITH THE PURPOSE OF ACQUIRING 
// UNLAWFUL MATERIAL OR ANY OTHER BENEFIT IS PROHIBITED! 
// THIS PROGRAM IS PROTECTED BY COPYRIGHT LAWS AND YOU MAY NOT 
// REVERSE ENGINEER, DECOMPILE, OR DISASSEMBLE IT.

#ifndef MBCheckResult_h
#define MBCheckResult_h

typedef NS_ENUM(NSInteger, MBCheckResult) {
    MBCheckResultNotPerformed = 0,
    MBCheckResultPass,
    MBCheckResultFail
};

typedef NS_ENUM(NSInteger, MBMatchLevel) {
    MBMatchLevelDisabled = 0,
    MBMatchLevel1,
    MBMatchLevel2,
    MBMatchLevel3,
    MBMatchLevel4,
    MBMatchLevel5,
    MBMatchLevel6,
    MBMatchLevel7,
    MBMatchLevel8,
    MBMatchLevel9,
    MBMatchLevel10,
};

#endif /* MBCheckResult_h */
