//
// Created by Niucong on 2021/3/5.
//

// 3.�ṹ��ָ�� �� ��̬�ڴ濪�١�

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Cat2 {
    char name[10];
    int age;
};

int mainT7_304() { // ��

    // VS��д����Cat2 * cat = (Cat2 *) malloc(sizeof(Cat2));
    struct Cat2 *cat = malloc(sizeof(struct Cat2));

    strcpy(cat->name, "��ɫè");
    cat->age = 5;

    printf("name:%s, age:%d \n", cat->name, cat->age);

    // �����ı����ͷ�
    free(cat);
    cat = NULL;

    return 0;
}