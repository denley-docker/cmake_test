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
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
target_sources(${PROJECT_NAME}
  PRIVATE
    src/my_math.cpp
)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}Targets
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(EXPORT ${PROJECT_NAME}Targets
  FILE ${PROJECT_NAME}Targets.cmake
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

install(FILES ${CMAKE_CURRENT_LIST_DIR}/cmake/my_mathConfig.cmake
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/my_math)

install(DIRECTORY include/${PROJECT_NAME}
  DESTINATION include
  PATTERN "*.h"
)

include (InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE
  "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
include (CPack)
