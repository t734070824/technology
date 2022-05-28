## 思考
1. 从 机器语言 --> C --> 其他高级语言
    - 是一个不停的简化的过程, 方便 程序员的过程...  --> 抽象...
    - 那么 有没有 特高级语言的出现呢... 更加简化
    - TODO
2. 编程语言的发展 和 硬件发展的关系... TODO
3. 如果声明是把特定标识符和 计算机内存中的特定位置 联系起来
   - 那么 声明本身 存储在哪里...TODO
4. 理解 .h 和 .c 文件的关系和区别 TODO
5. printf 如何参给的数量不够, 会打印内存中的任意值???
   - printf("ten is %d, is %d is %d\n", ten);
   - 栈 又是他, 只给printf一个参数, 也就是只是入栈一个, 但是printf 照常按照 %d pull 3个 4字节,....
6. char name[40]; float weight;
   - scanf("%s", name) vs scanf("%f", &weight)
   - TODO --> &
7. char name[2];
   - 2的实际意义, 他真的能够约束 数组长度
   - 实际情况 是不可以.... TODO
8. char name[40]
   - sizeof name = 40
   - sizeof 是如何返回 数组所占字节大小的 TODO
   - https://blog.csdn.net/jigetage/article/details/84206748
   - 还需要继续深入 TODO
9. C 数组 和 java数组的区别
   - C 数组竟然不会检查越界.... TODO
10. java 中 不定参数函数 和 栈的关系...TODO
11. 内存泄露, 比如数组声明的时候, 其实内存已经分配好了
    - 使用完之后, 如何回收呢???
12. 作用域
    - 什么保证了 一个变量 的作用域??
    - 通过使用的时候 查找的方式吗???
    - TODO
    - 通过汇编的方式 思考一下..