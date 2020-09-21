#ifndef _LIBDEF_H_
#define _LIBDEF_H_

#define _STL_BEGIN_ namespace gnustl {
#define _STL_END_ }

#define _CXX_STANDARD_YEAR_ 2017

#if _CXX_STANDARD_YEAR_ > 1997
#define _HAS_CXX_98_
#endif

#if _CXX_STANDARD_YEAR_ > 2002
#define _HAS_CXX_03_
#endif

#if _CXX_STANDARD_YEAR_ > 2010
#define _HAS_CXX_11_
#endif

#if _CXX_STANDARD_YEAR_ > 2016
#define _HAS_CXX_17_
#endif

#if _CXX_STANDARD_YEAR_ > 2019
#define _HAS_CXX_20
#endif

#define DEBUGMODE true
#define RELEASEMODE !DEBUGMODE

#endif