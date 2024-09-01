cmake_minimum_required(VERSION 3.28.2)

set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic")

project(duck)


add_executable(duck ./src/duck.c ./src/args.c ./src/utils.c ./src/file.c)
target_include_directories(duck PUBLIC ./src/)
