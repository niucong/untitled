//
// Created by Niucong on 2021/3/10.
//
// #include <stdio.h> // C语言的标准支持

#include <iostream> // C++标准支持  C++的与众不同

using namespace std; // 命名空间 C++ 的特性 （Java语言的内部类）

int main() {
    // C++语言面向对象 + 标准特性
    // C语言面向过程，函数+结构体
    // C++里面可以运行C语言，可以调用C语言，反之 就不行C语言无法运行C++
    // 以后我们85%以上 都是 用C++去写功能
    // 小故事：谣言 C++--  在C语言上增加好的内容

    // C++里面可以运行C语言，可以调用C语言，反之 就不行C语言无法运行C++
    printf("降龙十八掌(C版)\n");

    // std::cout << "C++语言的学习" << std::endl;
    cout << "C++语言的学习" << endl; // 因为你前面引入了命名空间，省略std::

    // endl == \n  都是换行的含义一样

    // Kotlin也有操作符重载， Kotlin就是各个语言的精华所在

    // << 不是属性里面的运算，操作符重载，后面会讲
    cout << "擒龙功" << endl;

    cout << "铁头功\n"
         << "金刚腿\n"
         << "铁布衫\n";

    return 0;
}


