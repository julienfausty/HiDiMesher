cmake_minimum_required(VERSION 3.4)

#Declaration of the project.

project(MeshingProject)

#Project configuration.

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build/)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib/)

#Include directories
include_directories (./src)

#Add subdirectories.
add_subdirectory (./src)
add_subdirectory (./tests)

#Adds the executables.

add_executable(
  driver
  main.cpp
  )
target_link_libraries (driver src)
