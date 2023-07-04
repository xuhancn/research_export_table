#pragma once
#include <stdio.h>

#define PRINTF_FUNC printf ("This is function: %s \n", __FUNCTION__);

#ifdef _WIN32
//#if defined(IPEX_BUILD_SHARED_LIBS)
#define IPEX_EXPORT __declspec(dllexport)
#define IPEX_IMPORT __declspec(dllimport)
//#else
//#define IPEX_EXPORT
//#define IPEX_IMPORT
//#endif
#else // _WIN32
#if defined(__GNUC__)
#define IPEX_EXPORT __attribute__((__visibility__("default")))
#else // defined(__GNUC__)
#define IPEX_EXPORT
#endif // defined(__GNUC__)
#define IPEX_IMPORT IPEX_EXPORT
#endif // _WIN32

#ifdef BUILD_IPEX_MAIN_LIB
#define IPEX_API IPEX_EXPORT
#else
#define IPEX_API IPEX_IMPORT
#endif

IPEX_API float dog_func(int x, float y);
IPEX_API int baby_func(int a);
IPEX_API double caffe_hahaha(double a, double b);
IPEX_API void apple_func();