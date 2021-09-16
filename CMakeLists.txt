cmake_minimum_required(VERSION 3.21.1)
project(cmake_test
  VERSION 0.0.1
  DESCRIPTION "cmake test"
  LANGUAGES CXX
)

option(USE_MYMATH "Use tutorial provided math implementation" ON)
configure_file(CMakeTestConfig.h.in CMakeTestConfig.h)

if (USE_MYMATH)
  add_subdirectory(vendor/my_math)
  list(APPEND EXTRA_LIBS my_math)
endif()

add_executable(${PROJECT_NAME})
target_compile_options(${PROJECT_NAME}
  PRIVATE
    -Werror
)
target_compile_features(${PROJECT_NAME}
  PRIVATE
    cxx_std_17
)
target_include_directories(${PROJECT_NAME}
  PRIVATE
    include
    ${PROJECT_BINARY_DIR}
)
target_sources(${PROJECT_NAME}
  PRIVATE
    src/main.cpp
)
target_link_libraries(${PROJECT_NAME}
  PRIVATE
    ${EXTRA_LIBS}
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/CMakeTestConfig.h"
  DESTINATION include
)
