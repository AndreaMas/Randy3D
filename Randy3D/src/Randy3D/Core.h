#pragma once

#ifdef _WIN32
	#ifdef RANDY_BUILD_DLL
		#define RANDY_API __declspec(dllexport)
	#else
		#define RANDY_API __declspec(dllimport)
	#endif
#else
	#error Randy3D only supports windows.
#endif