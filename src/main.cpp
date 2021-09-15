#include "CMakeTestConfig.h"
#include <iostream>

int main(int argc,char* argv[])
{
  int result = 0;

  std::cout<< argv[0] << " Version "
    << cmake_test_VERSION_MAJOR << "."
    << cmake_test_VERSION_MINOR << "."
    << cmake_test_VERSION_PATCH << std::endl;
  std::cout << "Hello, CMake 3.21.2" << std::endl;
  return result;
}
