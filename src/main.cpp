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

  std::cout<< argv[0] << " Version " << PROJECT_VERSION << std::endl;
  float number  = (argc == 1 ? 5 : atof(argv[1]));

#ifdef USE_MYMATH
  std::cout << "Use our sqrt:" << mysqrt(number) << std::endl;
#else
  std::cout << "Use standard sqrt:" << std::sqrt(number) <<std::endl;
#endif

  std::cout << "Hello, CMake 3.21.2" << std::endl;
  return result;
}
