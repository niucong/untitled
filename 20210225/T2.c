//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

// �༶ָ���������ʲô�� (C�Ŀ�ܣ���ȥ˵���Ƚ�ʱ��)
void test1(int ** n) {}

// 1.�༶ָ�롣
int mainT2_225() {

    int num = 999;

    // һ��ָ�� *
    // ����ʵ���������У��������ָ��  int ***
    int * num_p = &num; // ȡ��num���ڴ��ַ�� num_p��һ��ָ�룩

    int ** num_p_p = &num_p; // ȡ��num_p���ڴ��ַ��  num_p_p������ָ�룩

    int *** num_ppp = &num_p_p;

    printf("num_p��ֵ�ǣ�%p�� num_p_p��ֵ�ǣ�%p\n", num_p, num_p_p);
    // num_p��ֵ�ǣ�0061FF18�� num_p_p��ֵ�ǣ�0061FF14

    // ������� 999
    printf("��ȡ���յ�ֵ��%d\n", **num_p_p);
    printf("��ȡ���յ�ֵ��%d\n", *** num_ppp);

    // �༶ָ���������ʲô��
    // test1(num_p_p)

     printf("num_p���Լ����ڴ��ַ�ǣ�%p�� num_p_p�Լ��Ķ��ڴ��ַ�ǣ�%p\n", &num_p, &num_p_p);

    // *num_ppp  ȡ����ʲô��

    return 0;
}
