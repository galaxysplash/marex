cmake_minimum_required(VERSION 3.28)
project(compiler)

add_subdirectory(src)
add_subdirectory(lib)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} src/main.cpp)

# modules
target_link_libraries(${PROJECT_NAME} PRIVATE lexer token)

# third party
target_link_libraries(${PROJECT_NAME} PRIVATE matchit llvm)