//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

// 通过  指针（地址） 修改值
int mainT6_223() {

    int i = 100;

    // p:我只接收地址，你给我一个100，不规范
//     int * p = i;
    int * p = &i;

    i = 200;

    printf("i的值是:%d\n", i);

    *p = 300;

    printf("i的值是:%d\n", i);

    return 0;
}

