// Created by Toni Krešo on 26.07.2023.. 
// Copyright (c) 2023 Microblink Ltd. All rights reserved.

// ANY UNAUTHORIZED USE OR SALE, DUPLICATION, OR DISTRIBUTION 
// OF THIS PROGRAM OR ANY OF ITS PARTS, IN SOURCE OR BINARY FORMS, 
// WITH OR WITHOUT MODIFICATION, WITH THE PURPOSE OF ACQUIRING 
// UNLAWFUL MATERIAL OR ANY OTHER BENEFIT IS PROHIBITED! 
// THIS PROGRAM IS PROTECTED BY COPYRIGHT LAWS AND YOU MAY NOT 
// REVERSE ENGINEER, DECOMPILE, OR DISASSEMBLE IT.

#ifndef MBLivenessStatus_h
#define MBLivenessStatus_h

typedef NS_ENUM(NSInteger, MBLivenessStatus) {
    MBLivenessStatusNotAvailable = 0,
    MBLivenessStatusHandNotPresent,
    MBLivenessStatusNotEnoughHandPresent,
    MBLivenessStatusDocumentNotInHand,
    MBLivenessStatusDocumentInHand,
};

#endif /* MBLivenessStatus_h */
