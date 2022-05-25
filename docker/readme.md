## Docker

### 依赖
1. kernel namespaces and cgroups
2. go语言
3. volume 的概念和本质
4. netshoot
   - 什么掉东西啊...


### 遇到的问题
1. virbox, 桥接网卡, 未指定
   - https://www.cnblogs.com/Gouwa/p/12908958.html
2. 如何解决 Alpine Linux 安装 curl 速度慢的问题
   - 将 alpine linux apk 的安装源改为国内镜像可解决
   - (第二行): RUN sed -i 's/dl-cdn.alpinelinux.org/mirrors.ustc.edu.cn/g' /etc/apk/repositories
3. docker compose volumes 相对路径 的 问题
   - 

### 具体 步骤
1. docker wiki
   - https://zh.wikipedia.org/wiki/Docker
2. docker docs
   - https://docs.docker.com/get-started/overview/
3. ubuntu-server-docker
4. Install Docker Desktop on Ubuntu
5. docker-compose 3.7  安装 --未完成
6. 安装docker-ce
   - https://docs.docker.com/engine/install/ubuntu/
   - 最后: 直接 sudo apt install docker-compose 完成 干... --> 版本太低
   - 最最后: https://blog.csdn.net/renzhewudi77/article/details/82878773



### 步骤
1. 先学习 容器的基础知识, 快速掌握
2. 在学习的过程中, 发现支持这个知识的其他重要的基础支持,一一补充
3. 然后指定 目标实现可以量化的指标
4. 目标实现

### 思考
1. Docker是什么
    - 利用Linux核心的资源分离机制(cgroups namespaces) 来实现的操作系统级别的虚拟化...
2. 我为什么要学习它
    - 当前我这边的 应用全部使用的时候 线上 容器运行, 而且 市场需求也很多
3. 学习后监测掌握情况的成果是啥
    - 实现一个 my-docker
        - 运行一个 redis