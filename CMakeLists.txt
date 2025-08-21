cmake_minimum_required(VERSION 3.25)
project(marex)

include_directories(include)

add_subdirectory(lib)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE core)



