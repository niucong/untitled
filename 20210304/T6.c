//
// Created by Niucong on 2021/3/5.
//

// 3.�ṹ��ָ�� �� ��̬�ڴ濪�١�

#include <stdio.h>
#include <string.h>

struct Cat {
    char name[10];
    int age;
};

int mainT6_304() { // ջ

    // �ṹ��
    struct Cat cat = {"С��è", 2};

    // �ṹ�� ָ��    -> ����һ��ָ���Ա
    // VS��д����Cat * catp = &cat;
    struct Cat * catp = &cat;
    catp->age = 3;
    strcpy(catp->name, "С��è2");
    printf("name:%s, age:%d \n", catp->name, catp->age);

    return 0;
}