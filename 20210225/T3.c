//
// Created by Niucong on 2021/3/4.
//
#include <stdio.h>

// ����������ָ�롣
int mainT3_225() {
    // ��������
//     int [] arr = {1,2,3,4}; //�����д��
//    int *arr = {1, 2, 3, 4};
    int arr[]  = {1,2,3,4};

    // ��������
    // ����ƽ̨������ Clion���ã� Linux�ϱ���
    /*for (int i = 0; i < 4; ++i) {

    }*/

    // VS�ǳ��ϸ񣬹淶��    CLion����

    // Linux��û�����⣬Clionû�����⣬Macû������
    int i = 0;
    for (i = 0; i < 4; ++i) {
        printf("%d\n", arr[i]); // ȡֵ
    }

    // ���� �� ָ�� �ҹ�
    // ������ڴ��ַ == ��һ��Ԫ�ص��ڴ��ַ  == &arr
    // ������ڴ��ַ == ��һ��Ԫ�أ����ǵڶ���Ԫ�أ�Ҳ���ǵ�n��Ԫ��
    printf("arr  =   %d\n", arr);
    printf("&arr  =   %d\n", &arr);
    printf("&arr[0]  =   %d\n", &arr[0]);

    // ��Ȼ�������һ���ڴ��ַ
    int *arr_p = arr;

    printf("%d\n", *arr_p); // *arr_p ȡ��Ԫ��һ�ڴ��ַ��ֵ 1

    arr_p++; // ָ��Ų��   Ԫ�ض����ڴ��ַ��

    printf("%d\n", *arr_p); // *arr_p ȡ��Ԫ�ض��ڴ��ַ��ֵ 2

    arr_p += 2;

    printf("%d\n", *arr_p); // ���4

    // ���1

    arr_p -= 3; // Ų��ָ��ָ�� Ԫ��һ

    printf("%d\n", *arr_p);

    arr_p += 2000;

    printf("%d\n", *arr_p); // ϵͳֵ 572662306


    // �Ժ����� ��ά����/����ָ��
    // int *** arrPpp;

    return 0;
}

