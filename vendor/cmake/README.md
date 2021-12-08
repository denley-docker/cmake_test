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
