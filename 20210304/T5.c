//
// Created by Niucong on 2021/3/5.
//

// 2.�ṹ�嶨����ʹ�á�  ��3��д��

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

struct Study {
    char * studyContent; // ѧϰ������
};

struct Student {
    char name[10];
    int age;
    char sex;

    // Study study; // VS��д��
    struct Study study; // Clion���ߵ�д��

    struct Wan {
        char * wanContent; // �������
    } wan;
};

int mainT5_304() {

    struct Student student =
            {"��Ԫ��", 88, 'm' ,
             {"ѧϰC"},
             {"����ũҩ"}
            };

    printf("name:%s, age:%d, sex:%c��study:%s, wan:%s \n",
           student.name, student.age, student.sex, student.study.studyContent, student.wan.wanContent);


    return 0;
}