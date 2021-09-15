cmake_minimum_required(VERSION 3.21.2)
project(cmake_test
  VERSION 0.0.1
  DESCRIPTION "cmake test"
  LANGUAGES CXX
)

configure_file(CMakeTestConfig.h.in CMakeTestConfig.h)

add_executable(${PROJECT_NAME}
  src/main.cpp
)
target_compile_features(${PROJECT_NAME}
  PRIVATE
    cxx_std_17
)
target_include_directories(${PROJECT_NAME}
  PUBLIC
    include
    ${PROJECT_BINARY_DIR}
)
