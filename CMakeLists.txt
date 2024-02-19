cmake_minimum_required (VERSION 3.10)

# Define the project
project(cal)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# Add definition for math library
add_library(cal src/cal.cc)


# Add definition for the cmake-tutorial binary
add_executable(cmake-tutorial src/main.cc)
target_link_libraries(cmake-tutorial cal)


# Third-party library
include(ExternalProject)
ExternalProject_Add(googletest
    PREFIX "${CMAKE_BINARY_DIR}/lib"
    GIT_REPOSITORY "https://github.com/google/googletest.git"
    GIT_TAG "main"
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/lib/installed
)


# Prevent build on all targets build
set_target_properties(googletest PROPERTIES EXCLUDE_FROM_ALL TRUE)


# Define ${CMAKE_INSTALL_...} variables
include(GNUInstallDirs)


# Specify where third-party libraries are located
link_directories(${CMAKE_BINARY_DIR}/lib/installed/${CMAKE_INSTALL_LIBDIR})
include_directories(${CMAKE_BINARY_DIR}/lib/installed/${CMAKE_INSTALL_INCLUDEDIR})



# Add the path to your math module source files
set(MATH_SOURCES src/cal.cc)

# Add the path to your test files
set(TEST_SOURCES test/cal_test.cc)

# Google Test setup
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(cal_test ${TEST_SOURCES} ${MATH_SOURCES})

target_link_libraries(cal_test ${GTEST_BOTH_LIBRARIES} pthread)
