/* @formatter:off */
/****************************************************************************************
 *                     NEC CONFIDENTIAL AND PROPRIETARY
 *
 *                    COPYRIGHT (C) NEC CORPORATION 2016
 *
 *    ALL RIGHTS RESERVED BY NEC CORPORATION.  THIS PROGRAM MUST BE USED
 *  SOLELY FOR THE PURPOSE FOR WHICH IT WAS FURNISHED BY NEC CORPORATION.
 * NO PART OF THIS PROGRAM MAY BE REPRODUCED OR DISCLOSED TO OTHERS, IN ANY
 *      FORM, WITHOUT THE PRIOR WRITTEN PERMISSION OF NEC CORPORATION.
 *
 *   USE OF COPYRIGHT NOTICE DOES NOT EVIDENCE PUBLICATION OF THE PROGRAM.
 *
 *                     NEC CONFIDENTIAL AND PROPRIETARY
 ****************************************************************************************/
/* @formatter:on */

/*
 * NeoFaceWrapper.hpp
 */
#pragma once

#include <vector>

// NeoFaceWrapper Error Code
#define NFW_SUCCESS               (     1)  //!< Success
#define NFW_FAILED                (     0)  //!< Failed
#define NFW_CANNOT_FIND_FACE      (    99)  //!< Failed in finding a face
#define NFW_NF_FAILED             (  1000)  //!< Failed in NeoFace
#define NFW_NF_CORE_ERROR         (  1001)  //!< Internal process error in NeoFace
#define NFW_ARGUMENT_ERROR        (-10202)  //!< Illegal argument
#define NFW_NOT_INITIALIZE_ERROR  (-10301)  //!< Initialization error
#define NFW_PARAM_ERROR           (-10307)  //!< Internal parameter configuration error
#define NFW_CORE_ERROR            (-10399)  //!< Internal process error
#define NFW_EXPIRED               (-70000)  //!< expired error
#define NFW_LICENSE_ERROR         (-70001)  //!< license error
#define NFW_MEMORY_ERROR          (-90000)  //!< Memory allocation error

#define NFW_FACE_FOUND_BLINK_OK   (     2)  //!< Face found and blink check OK
#define NFW_FACE_TOO_SMALL        (   100)  //!< Too small
#define NFW_FACE_LOW_QUALITY      (   101)  //!< Low quality
#define NFW_FACE_NOT_FRONTAL      (   102)  //!< Not frontal

namespace NeoFaceGL {
	class CFaceInfo;

	//class CFaceAttribute;

	class CFaceFeature;

	class CVerify;
}

/*
 * NeoFaceWrapper
 * (For FIDO Face Recognition Module)
 */
 class NeoFaceWrapper {

public:
	__attribute__ ((visibility("default"))) NeoFaceWrapper();

	__attribute__ ((visibility("default"))) ~NeoFaceWrapper();

#ifdef __APPLE__
	// iOS版ではFramework内のバンドルに辞書を配置するので引数不要
	__attribute__ ((visibility("default"))) int Initialize(const char *reserved1, const char *reserved2, const long reserved3);
#else

	__attribute__ ((visibility("default"))) int Initialize(const char *dics_dir);

#endif

	__attribute__ ((visibility("default"))) int Terminate();

	__attribute__ ((visibility("default"))) int FindFace(const unsigned char *image, const int width, const int height, int &message);

	__attribute__ ((visibility("default"))) int GetFaceRect(int &left, int &top, int &right, int &bottom);

	//__attribute__ ((visibility("default"))) void ResetBlinkFlag();

	__attribute__ ((visibility("default"))) int CreateFeature(unsigned char **feature, long &size);

	__attribute__ ((visibility("default"))) int Verify(unsigned char *query, unsigned char *target, float *score);

private:
	int PushResultCode(int result_code);

	bool HasExpired();

	bool state;
	//int blink_flag;
	NeoFaceGL::CFaceInfo *faceinfo;
	//NeoFaceGL::CFaceAttribute    *faceattribute;
	NeoFaceGL::CFaceFeature *facefeature;
	NeoFaceGL::CVerify *verify;
	std::vector<unsigned char> feature_vec;
	std::vector<int> result_code_list;
	int result_code_list_pos;
	bool stubMode;
};

