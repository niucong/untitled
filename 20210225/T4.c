//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

// 3.����ָ��������顣

int mainT4_225() {

    // ��������
    // int [] arr = {1,2,3,4}; �����д��
    int arr[]  = {1,2,3,4};

    // �������������ڴ�ռ䣨û�жϲ㣬�й��ɣ� ����  ÿ��Ų�� 4���ֽ� == int����

    int * arr_p = arr;

    int i = 0;
    for (i = 0; i < 4; ++i) {
        printf("λ��%d��ֵ��:%d\n", i, * (arr_p + i));

        // 04    08   12    16
        printf("λ��%d���ڴ��ַ��:%p\n", i, (arr_p + i));
    }

    return 0;
}