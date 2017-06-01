CMAKE_MINIMUM_REQUIRED(VERSION 2.6.0)
PROJECT(Main)

# Locate GSL
FIND_PACKAGE( PkgConfig REQUIRED)
PKG_CHECK_MODULES( gsl REQUIRED gsl )

# Moving the binary files to the directory bin/
SET (EXECUTABLE_OUTPUT_PATH ${Main_BINARY_DIR}/bin
     CACHE PATH "Directory for Executables")

ADD_EXECUTABLE(Main Main.cpp)
TARGET_LINK_LIBRARIES(Main ${gsl_LIBRARIES} pthread)


OPTION(RUN_TESTS "Compile tests" ON)
if(RUN_TESTS)
	add_subdirectory(Test)
endif()

OPTION(OPENSEMBA "Inlcude OpenSEMBA library" ON)
if(OPENSEMBA)
	#include_directories(${CMAKE_CURRENT_LIST_DIR}
        #                   ${CMAKE_CURRENT_LIST_DIR}/../external/)
	add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../external/OpenSEMBA/src ${CMAKE_CURRENT_BINARY_DIR}/opensemba)
endif()
