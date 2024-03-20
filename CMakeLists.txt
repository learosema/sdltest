cmake_minimum_required(VERSION 3.28 FATAL_ERROR)
project(SDL2Test LANGUAGES CXX)

# add compilation flags
set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR})

file(GLOB SOURCES
    src/*.cpp
    include/*.hpp
	include/*.h
)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})



