cmake_minimum_required(VERSION 3.2)

add_executable(thread_demo thread.c)

target_link_libraries(thread_demo pthread)
