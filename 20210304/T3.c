//
// Created by Niucong on 2021/3/5.
//

// 2.�ṹ�嶨����ʹ�á�  ��һ��д��

// Java/Kotlin�ǲ�������ĸ��C����  ����  �ṹ�壨�൱����Java���ࣩ

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

struct Dog {
    // ��Ա
    char name[10]; // copy��ȥ
    int age;
    char sex;

}; // �����д;

int mainT3_304() {
    struct Dog dog; // ����д�꣬��Ա��û���κγ�ʼ���ģ���ԱĬ��ֵ ��ϵͳֵ(name:?@, age:3133440, sex:?)
//    printf("name:%s, age:%d, sex:%c \n", dog.name, dog.age, dog.sex);

    // ��ֵ����
    // dog.name = "����";
    strcpy(dog.name, "����");
    dog.age = 3;
    dog.sex = 'G';
    printf("name:%s, age:%d, sex:%c \n", dog.name, dog.age, dog.sex);


    return 0;
}