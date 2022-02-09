cmake_minimum_required(VERSION 3.10)
project(libplaymc)

add_subdirectory(src)

# Folder for the .h files
include_directories(include)
add_executable(playmc src/cli/cli.cpp)