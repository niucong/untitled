//
// Created by Niucong on 2021/3/3.
//
#include <stdio.h>

void cutStr(int *result, char *str, int start, int end) {
    printf("str��ֵ:%s\n", str);
    printf("str�ĵ�ַ:%p\n", &str);
//    printf("str��ֵ:%s\n", *str);

    printf("%p\n", &str + 2 * sizeof(char));
    printf("%p\n", &str + 2);

    printf("%p\n", result);

    result = &str + 2 * sizeof(char);
    printf("%p\n", result);
//    printf("%p\n", result + 2 * sizeof(char));
//
//    printf("%p\n", &result);
    printf("%s\n", *result);// Derry is

//    int i;
//    for (i = start; i < end; ++i) {
////        printf("%d\n", i * sizeof(char));
//        printf("%s\n", *(&str + (i * sizeof(char))));
////        result += *(str+i);
//    }
}

int mainW() {

    char *str = "Derry is";
    char *result;
//    printf("%s\n", str);
    cutStr(&result, str, 2, 5);// ȫ��ʹ��ָ�룬���ַ������н�ȡ����
    printf("%s\n", result); // ���������rry

    return 0;
}