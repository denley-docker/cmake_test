# my_math
用于测试的数学库

# 运行
```bash
mkdir -p build
cd build
cmake ..
make
make install
```

# 总结
* 如果是`make install`后使用此库，则应加上
```bash
find_package(my_math REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE my_math)
```
