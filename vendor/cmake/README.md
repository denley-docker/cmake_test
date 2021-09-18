docker下的cmake开发环境

# 运行
```bash
docker build -t denley/cmake:<VERSION> .
```

# 入库
```bash
docker login
docker push denley/cmake:<VERSION>
docker tag <IMAGE_ID> denley/cmake:latest
docker push denley/cmake:latest
```

# 总结
* [CMake Cookbook中文版](https://www.bookstack.cn/read/CMake-Cookbook/README.md)
* [官方CMake 3.20](https://runebook.dev/zh-CN/docs/cmake/)
* [CMake 入门实战](https://www.hahack.com/codes/cmake/)
* [CMake 实践](https://gavinliu6.github.io/CMake-Practice-zh-CN/#/)
* [CMake最佳实践](https://www.jianshu.com/p/3711361d10a5)
* [Modern CMake 最佳实践](https://www.jianshu.com/p/8abf754654c4)
* [Professional CMake: A Practical Guide](https://crascit.com/professional-cmake/)
* [C++ 工程依赖管理新方向：CMake & Git](https://kingsamchen.github.io/2019/02/10/use-cmake-and-git-as-your-cpp-dependency-manager/)
* 阮一峰的[Make 命令教程](https://www.ruanyifeng.com/blog/2015/02/make.html)
