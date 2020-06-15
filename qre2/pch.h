// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#define KXVER 3

// add headers that you want to pre-compile here
#include "framework.h"

#ifdef KDB_EXPORTS
#define KDB_API __declspec(dllexport)
#else
#define KDB_API __declspec(dllimport)
#endif

#ifdef WIN32
#define K_DECL	_cdecl
#else
#define K_DECL
#endif

#pragma comment(lib,"re2.lib")
#ifdef __cplusplus
extern"C" {
#endif
#include "k.h"
	
#pragma comment(lib,"c.lib")
	  KDB_API K K_DECL  PartialMatchN(K x, K y);
	  KDB_API K K_DECL  FullMatch(K x, K y);
	  KDB_API K K_DECL  PartialMatch(K x, K y);
#ifdef __cplusplus
}
#endif

#endif //PCH_H
