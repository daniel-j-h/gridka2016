cmake_minimum_required(VERSION 2.8.11)
project(tooling LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=c++1y")

find_package(Boost REQUIRED system filesystem)

add_executable(${PROJECT_NAME} ${PROJECT_NAME}.cc)
target_link_libraries(${PROJECT_NAME} ${Boost_SYSTEM_LIBRARY} ${Boost_FILESYSTEM_LIBRARY})
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${Boost_INCLUDE_DIRS})
