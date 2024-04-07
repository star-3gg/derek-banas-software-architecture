cmake_minimum_required(VERSION 3.10)

# Set the project name
project(OOPClassHierarchy)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# INFO: Set Release mode and optimizations
# Uncomment this section if you want a debug build
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Add the executable
add_executable(${PROJECT_NAME} main.cpp Animal.cpp Bird.cpp Dog.cpp)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

