//
// Created by Niucong on 2021/3/5.
// TODO

// 5.�ṹ����ṹ��ָ�� ȡ������

#include <stdio.h>
#include <stdlib.h>

struct Workder_ {
    char name[10];
    int age;
    char sex;
};

// VS��д����typedef Workder_
typedef struct Workder_ Workder_; // ���ṹ��ȡ����

typedef Workder_ * Workder; // ���ṹ��ָ��ȡ����

// C���Դ�룬ϵͳԴ��...��Ϊʲô typedef ��ȡһ���ͽṹ��һ�������֣����ݴ����д��������һ�£�

int mainT9_304() {
    // ��ǰ Clion���� ������� struct   VS�ֲ��ü�  ������컯��
    // struct Workder_ workder1 = malloc(sizeof(struct Workder_));

    // ���� �����ݴ����д��������һ�£�
//    Workder_ workder1 = malloc(sizeof(Workder_));

    // VS  CLion  ���Ƕ���һ����д��
    Workder workder = malloc(sizeof(Workder_));

    return 0;
}

