#pragma once

#ifdef HELLO_PLATFORM_WINDOWS
  #ifdef HELLO_BUILD_DLL
    #define HELLO_API __declspec(dllexport)
  #else
    #define HELLO_API __declspec(dllimport)
  #endif
#else
  #error Hello only supports Windows
#endif
