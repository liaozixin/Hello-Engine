cmake_minimum_required(VERSION 3.13.0)
project(imgui-1.88 LANGUAGES C CXX)

file(GLOB SRC CONFIGURE_DEPENDS 
  ./*.cpp 
  backends/imgui_impl_dx11.cpp
  backends/imgui_impl_glfw.cpp)

add_library(imgui-1.88 STATIC "")
target_sources(imgui-1.88 PRIVATE
  ${SRC}
)
target_include_directories(imgui-1.88 PUBLIC ./include)

install(TARGETS imgui-1.88
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
  DESTINATION include
  FILES_MATCHING PATTERN "*.h*")


