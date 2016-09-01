cmake_minimum_required(VERSION 2.8.11)
project(tooling LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=c++1y")

add_executable(${PROJECT_NAME} ${PROJECT_NAME}.cc)



