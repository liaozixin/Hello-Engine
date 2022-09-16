
target("Hello")
  set_kind("shared")
  add_defines("HELLO_PLATFORM_WINDOWS", "HELLO_BUILD_DLL")
  add_files("Core/*.cpp")
  set_languages("c99", "c++20")
