cmake_minimum_required(VERSION 3.16.3) # Set the minimum required version of cmake to 3.16.3

project(helloworld+ VERSION 1.0 DESCRIPTION "Hello World gets a colored upgrade" LANGUAGES C CXX)

# Set C++20 as the base standard for the project.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)
enable_testing()

# Define your executable or library target
add_executable(${PROJECT_NAME} main.cpp) # or add_library for libraries

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
