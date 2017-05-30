CMAKE_MINIMUM_REQUIRED(VERSION 2.6.0)
PROJECT(Main)

# Locate GSL
FIND_PACKAGE( PkgConfig REQUIRED)
PKG_CHECK_MODULES( gsl REQUIRED gsl )

# Locate GTEST
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Moving the binary files to the directory bin/
SET (EXECUTABLE_OUTPUT_PATH ${Main_BINARY_DIR}/bin
     CACHE PATH "Directory for Executables")

ADD_EXECUTABLE(Main Main.cpp)
TARGET_LINK_LIBRARIES(Main ${gsl_LIBRARIES} ${GTEST_LIBRARIES} pthread)
