//
// Created by Niucong on 2021/3/5.
//

// �Ͻڿ�ָ����ϰ

#include <stdio.h>

int mainT2_304() {
    int a[] = {6,4,8,3,1,2,9,7,0,5};

    // *(a+4) --- (a+4):a����Ĭ��ָ����Ԫ�ص�ַ Ų���� ���ĸ�Ԫ��    *ȡ�����ĸ�Ԫ���ڴ��ַ��ֵ == 1
    // *a+1  a����Ĭ��ָ����Ԫ�ص�ַ Ų���� ��һ��Ԫ��     *ȡ����һ��Ԫ���ڴ��ַ��ֵ == 4
    // a[4] Ų�������ĸ�Ԫ�� �ڴ��ַ��ֵ ���� 1
    int result = a[*(a+*(a+4))];
    printf("result��ֵ��:%d\n", result); // ���1
    return 0;
}