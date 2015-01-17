# Customized CMakeLists file
# Variables
cmake_minimum_required( VERSION 2.8 FATAL_ERROR )
project( metaCpp )

set( src_files
   src/attribut.cpp
)

set( src_headers
   src/attribut.hpp
)

set( test_files 
)

set( test_headers
   tests/attribut_tests.inl
)

# use C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#include GTest library 
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

INCLUDE_DIRECTORIES( src/ )

# Add test executable target
ADD_EXECUTABLE( exe
    src/main.cpp
    ${src_files}
    ${src_headers}
)

ADD_EXECUTABLE ( tests_exe
   tests/main.cpp
   ${src_files}
   ${src_headers}
   ${test_files}
   ${test_headers}
)

SET_TARGET_PROPERTIES( exe PROPERTIES LINKER_LANGUAGE C )
SET_TARGET_PROPERTIES( tests_exe PROPERTIES LINKER_LANGUAGE C )

FIND_PACKAGE( Threads )
TARGET_LINK_LIBRARIES( exe ${CMAKE_THREAD_LIBS_INIT} )
TARGET_LINK_LIBRARIES( tests_exe ${CMAKE_THREAD_LIBS_INIT} )

# Create dependency of tests_exe on googletest
# ADD_DEPENDENCIES( tests_exe googletest )

# Specify tests_exe's link libraries
IF ( WIN32 )
   TARGET_LINK_LIBRARIES( tests_exe
      debug ${binary_dir}/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
      optimized ${binary_dir}/ReleaseLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
      )
ELSE()
   TARGET_LINK_LIBRARIES(tests_exe ${GTEST_LIBRARIES} pthread)
ENDIF()