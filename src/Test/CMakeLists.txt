cmake_minimum_required(VERSION 2.6)
PROJECT(Test)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
SET (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin
     CACHE PATH "Directory for Executables")

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTest Test.cpp)
target_link_libraries(runTest ${GTEST_LIBRARIES} pthread)
