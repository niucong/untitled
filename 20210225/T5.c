//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

// 4.ѭ��ʱ�����鸳ֵ��
int mainT5_225() {

    // ��������
    // int [] arr = {1,2,3,4}; �����д��
    int arr[4];

    int * arrP = arr;

    // sizeof arr == sizeof(arr)

    // ѭ����ֵ����
    int j = 0;
    for (j = 0; j < 4; ++j) {
        // 1.�õ� Ԫ��һ Ԫ�ض� Ԫ���� Ԫ���� ���ڴ��ַ   (arrP + j)
        // 2.ȡ�� Ԫ��һ Ԫ�ض� Ԫ���� Ԫ���� ���ڴ��ַ ����Ӧ��ֵ * (arrP + j)
        * (arrP + j) = (j + 10001);
    }

    // sizeof arr = 16(sizeof arr)  /  4(sizeof(int))
    // ���� �ոո�ֵ������
    for (int i = 0; i <  sizeof arr / sizeof(int); ++i) {
        printf("λ��%d��ֵ��:%d\n", i, * (arrP + i));
    }

    return 0;
}