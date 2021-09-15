cmake_minimum_required(VERSION 3.21.1)
project(my_math
  VERSION 0.0.1
  DESCRIPTION "my math"
  LANGUAGES CXX
)

add_library(${PROJECT_NAME})
target_compile_features(${PROJECT_NAME}
  PRIVATE
    cxx_std_17
)
target_include_directories(${PROJECT_NAME}
  PUBLIC
    include
)
target_sources(${PROJECT_NAME}
  PRIVATE
    src/my_math.cpp
)
