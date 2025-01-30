cmake_minimum_required(VERSION 3.0.0)
project(practice_openai VERSION 0.1.0)

# 32bit
# set (CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -g -m32")
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -m32")

# 64bit 
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -w -std=c++17")

find_package(CURL REQUIRED)
message(STATUS "Dire: ${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS "Dire: ${CMAKE_SOURCE_DIR}")

add_executable(${PROJECT_NAME}
src/main.cpp 
)