cmake_minimum_required(VERSION 3.10)

project(main)

add_executable(main main.cpp module.cpp)

target_compile_features(main PRIVATE cxx_std_23)
target_compile_options(main PRIVATE -Wall -pedantic)

target_include_directories(main PRIVATE include)
target_link_options(main PRIVATE -Wl,-ld_classic)
