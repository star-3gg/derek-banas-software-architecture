cmake_minimum_required(VERSION 3.10)

# Set the project name
project(OOPClassHierarchy)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# INFO: Link static libraries
set(CMAKE_EXE_LINKER_FLAGS "-static")

# INFO: Set Release mode and optimizations
# Uncomment this section if you want a debug build
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Add Google Test as a subdirectory
add_subdirectory(external/googletest)

# Enable testing with CTest
enable_testing()

# Include Google Test headers
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add subdirectories for each project
add_subdirectory(projects/0001-design-patterns-video-tutorial-1/src)
# Add other projects as needed
# add_subdirectory(projects/0002-design-patterns-video-tutorial-2)
# add_subdirectory(projects/0003-strategy-design-pattern)
# add_subdirectory(projects/0004-observer-design-pattern)



# cmake_minimum_required(VERSION 3.10)
#
# project(DesignPatterns)
#
# # Include subprojects
# add_subdirectory(projects/0001-design-patterns-video-tutorial-1)
# # add_subdirectory(projects/0002-design-patterns-video-tutorial-2)
# # add_subdirectory(projects/0003-strategy-design-pattern)
# # add_subdirectory(projects/0004-observer-design-pattern)
