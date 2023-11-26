# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Set the project name
project(SimpleCMakeExample)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
file(GLOB SOURCES "src/*.cpp")

# Add an executable target
add_executable(SimpleCMakeExample ${SOURCES})
