#include "CMakeTestConfig.h"
#include <iostream>

#ifdef USE_MYMATH
  #include "my_math/my_math.h"
#else
  #include <cmath>
#endif

int main(int argc,char* argv[])
{
  int result = 0;

  std::cout<< argv[0] << " Version "
    << cmake_test_VERSION_MAJOR << "."
    << cmake_test_VERSION_MINOR << "."
    << cmake_test_VERSION_PATCH << std::endl;

#ifdef USE_MYMATH
  std::cout << mysqrt(5) << std::endl;
#else
  std::cout << std::sqrt(5) <<std::endl;
#endif

  std::cout << "Hello, CMake 3.21.2" << std::endl;
  return result;
}
