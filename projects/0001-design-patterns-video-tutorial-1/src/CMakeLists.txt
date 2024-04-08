cmake_minimum_required(VERSION 3.10)

# Set the project name
project(DesignPatternsVideoTutorial1)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(${PROJECT_NAME} main.cpp Animal.cpp Bird.cpp Dog.cpp)

# Add the test executable
add_executable(runTests AnimalTest.cpp Animal.cpp)

# Link with Google Test and the project library
target_link_libraries(runTests gtest gtest_main pthread)

# Add the test to CTest
add_test(NAME AnimalTest COMMAND runTests)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

