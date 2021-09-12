#include "CMakeTestConfig.h"
#include "nlohmann/json.hpp"
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

  using json = nlohmann::json;

  // create JSON values
  json object = {{"one", 1}, {"two", 2}};
  json null;

  // print values
  std::cout << object << '\n';
  std::cout << null << '\n';

  // add values
  auto res1 = object.emplace("three", 3);
  null.emplace("A", "a");
  null.emplace("B", "b");

  // the following call will not add an object, because there is already
  // a value stored at key "B"
  auto res2 = null.emplace("B", "c");

  // print values
  std::cout << object << '\n';
  std::cout << *res1.first << " " << std::boolalpha << res1.second << '\n';

  std::cout << null << '\n';
  std::cout << *res2.first << " " << std::boolalpha << res2.second << '\n';

  std::cout << "Hello, CMake 3.21.2" << std::endl;
  return result;
}
