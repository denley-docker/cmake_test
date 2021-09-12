cmake_minimum_required(VERSION 3.21.2)
project(cmake_test)

set(CMAKE_CXX_STANDARD 17)

include_directories(include
)

set(SOURCE_FILES src/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")
include(spdlog)
target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog)
