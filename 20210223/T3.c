//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

// ��������ռ�õ��ֽ���(���������У��ǳ����õ�)  sizeof��ȡ�ֽ���
int mainT3_223() {

    // int ռ�����ֽ�  == 4
    // double ռ�����ֽ� == 8
    // char ռ�����ֽ� == 8

    printf("int ����������ռ���ֽ�����%d\n", sizeof(int));// 4
    printf("double ����������ռ���ֽ�����%d\n", sizeof(double));// 8
    printf("char ����������ռ���ֽ�����%d\n", sizeof(char));// 1

    printf("float ����������ռ���ֽ�����%d\n", sizeof(float ));// 4
    printf("long ����������ռ���ֽ�����%d\n", sizeof(long));// 4
    printf("short ����������ռ���ֽ�����%d\n", sizeof(short));// 2

    return NULL; // NULL == 0
}

