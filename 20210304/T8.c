//
// Created by Niucong on 2021/3/5.
//

// 4.�ṹ������顣

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cat3 {
    char name[10];
    int age;
};

int main() {

    // ջ�� ��̬����
    struct Cat3 cat [10] = {
            {"С��", 1},
            {"С��", 2},
            {"С��", 3},
            {},
            {},
            {},
            {},
            {},
            {},
            {}
    };

    // VS��д��
    // cat[9] = {"С��9", 9},

    // ClION��д��
    struct Cat3 cat9 =  {"С��9", 9};
    // cat[9] = cat9;
    *(cat + 9) = cat9;
    printf("name:%s, age:%d \n", cat9.name, cat9.age);


    // ���� ��̬���� ==============================
    struct Cat3 * cat2 = malloc(sizeof(struct Cat3) * 10);

    // ��1Ԫ�ص�ַ�Ĳ�����������ֵ�������Ǹ�ֵ���Ǹ�Ԫ��  ��Ĭ��ָ����Ԫ�ص�ַ��
    strcpy(cat2->name, "С��è000");
    cat2->age = 9;
    printf("name:%s, age:%d \n", cat2->name, cat2->age);

    // ��8Ԫ�ص�ַ�Ĳ����� ���ڰ˸�Ԫ�ظ�ֵ
    cat2 += 7;
    strcpy(cat2->name, "С��è888");
    cat2->age = 88;
    printf("name:%s, age:%d \n", cat2->name, cat2->age);

    free(cat2);
    cat2 = NULL;


    return 0;
}
