
cmake_minimum_required(VERSION 3.10)
project(AlgorithmRuntimeComparison)

set(CMAKE_CXX_STANDARD 17)

# Add source and test directories
add_subdirectory(src)
add_subdirectory(tests)

# Enable testing
enable_testing()
