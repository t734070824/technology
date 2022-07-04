## redis源码
1. SDS 空间预分配知道啥意思, 惰性空间释放 是什么东西
   - 就是free这个变量
   - 实际上 redis 不会在 buf的实际使用空间减少之后 就立刻回收
   - 而是会根据 free 进行重复使用
2. dictht.dictEntry 中 hash  冲突 如何 解决的
   - 链表 和 java的差不多
3. 根据redis的特性, 理解 命中率的重要性
   - TODO
4. 理解 所谓的 单线程
   - TODO
   - 其实, redis中有很多的争用操作(如果多线程个话)
   - 比如 rehash, server.dirty 等
5. 思考 redis的 rdb 以及 aof  和 mysql的持久化的 对比
   - TODO
   - rdb的文件格式 以及 内容 vs mmongodb的..
6. redis不支持 事务回滚, 
   - 只是面对明显错误的命令 他可以整个不执行
   - 只要是执行中 遇到了错误的命令, 那么 指导执行完. 只是不保证 全部都是执行争取 --> 也是符合 原子性 ---66666
   - 看起来 事务的回滚 是一个 大课题 TODO