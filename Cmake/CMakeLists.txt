# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
# 

project(My_Project)
cmake_minimum_required(VERSION 3.24)

# Add source to this project's executable.
add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")
target_link_libraries(CMakeProject1 MyLib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(MyLib  src/mylib.cpp)
# TODO: Add tests and install targets if needed.
install(TARGETS CMakeProject1 DESTINATION "cmakeproject1/bin")
