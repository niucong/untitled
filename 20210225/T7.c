//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

// 6.ָ�������к��ã���
int mainT7_225() {

    int num = 12;

    int * num_p = &num;

    // �Ż�������������޷�ͨ����
    double * num_p_d = num_p;

    printf("%d\n", sizeof num_p);
    printf("%d\n", sizeof num_p_d);

    // ָ��ռ�õ��ڴ��С�ǣ�  int double xxx ��ָ�� ��Զ����   4���ֽڣ�32��    4*2��64��

    // 6.ָ�������к��ã���  ��Ȼ���� 4���ֽڣ�Ϊʲô��Ҫ�� ָ������
    // ��ȡֵ��ʱ����ôȡ����������͹涨�ĺô�

    // int * p; // ������Ϊ�˼���ƫ����

    char c = 'a';
//     char * p = &c;
//     char * p = "AAAA";

    return 0;
}

