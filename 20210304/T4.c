//
// Created by Niucong on 2021/3/5.
//

// 2.�ṹ�嶨����ʹ�á�  ��2��д��

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

struct Person {
    // ��Ա
    char * name; // �ַ�ָ�� = "��ֵ"
    int age;
    char sex;
} ppp = {"Derry", 33, 'M'},
        ppp2,
        ppp3,
        pppp4,
        pppp5
// ...
;

int mainT4_304() {

    // Person == ppp == struct Person ppp;
    printf("name:%s, age:%d, sex:%c \n", ppp.name, ppp.age, ppp.sex);

    ppp.name="����";
    printf("name:%s, age:%d, sex:%c \n", ppp.name, ppp.age, ppp.sex);

    printf("name:%s, age:%d, sex:%c \n", ppp3.name, ppp3.age, ppp3.sex);

    // ��ֵ
    // strcpy(pppp5.name, "Derry5"); // Copy����ȥ
    pppp5.name = "DerryO";
    pppp5.age = 4;
    pppp5.sex = 'M';

    printf("name:%s, age:%d, sex:%c \n", pppp5.name, pppp5.age, pppp5.sex);


    return 0;
}