
add_executable(test_algorithms test_algorithms.cpp)
target_include_directories(test_algorithms PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(test_algorithms PRIVATE algorithms)

enable_testing()
add_test(NAME TestAlgorithms COMMAND test_algorithms)
