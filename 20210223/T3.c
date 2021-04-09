//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

// 基本类型占用的字节数(后续过程中，非常常用的)  sizeof获取字节数
int mainT3_223() {

    // int 占几个字节  == 4
    // double 占几个字节 == 8
    // char 占几个字节 == 8

    printf("int 数据类型所占的字节数：%d\n", sizeof(int));// 4
    printf("double 数据类型所占的字节数：%d\n", sizeof(double));// 8
    printf("char 数据类型所占的字节数：%d\n", sizeof(char));// 1

    printf("float 数据类型所占的字节数：%d\n", sizeof(float ));// 4
    printf("long 数据类型所占的字节数：%d\n", sizeof(long));// 4
    printf("short 数据类型所占的字节数：%d\n", sizeof(short));// 2

    return NULL; // NULL == 0
}

