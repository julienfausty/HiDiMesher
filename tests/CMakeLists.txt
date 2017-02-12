# Find CppTest

find_library (CPPTESTLIB NAMES cpptest)
find_path (CPPTESTDIR NAMES cpptest.h)

# Include directory holding cpptest.h

include_directories (${CPPTESTDIR})

# Include source directory.

include_directories (${PROJECT_BINARY_DIR}/src)

# Include tests directories.

include_directories (./TestsdPoint)
include_directories (./TestsdSimplex)

# Make library of the tests.
file (
  GLOB_RECURSE
  alltestfiles
  *.h
  *.cpp
  )

add_library(alltests ${alltestfiles})

# Make the tests executable.

add_executable (runTests RunAllTests.cpp)
target_link_libraries(runTests ${CPPTESTLIB} alltests src)
