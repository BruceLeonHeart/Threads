cmake_minimum_required(VERSION 3.2)

add_executable(thread_input thread_input.c)
add_executable(thread_output thread_output.c)

target_link_libraries(thread_input pthread)
target_link_libraries(thread_output pthread)
