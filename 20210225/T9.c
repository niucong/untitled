//
// Created by Niucong on 2021/3/4.
//

#include <stdio.h>

void callBackMethod(char * fileName, int current, int total) {
    printf("%sͼƬѹ���Ľ����ǣ�%d/%d\n", fileName, current, total);
}

// ѹ���ķ���
// ���庯��ָ��: ����ֵ(*����)(int,double)
void compress(char * fileName, void(*callBackP)(char *,int,int)) {
    callBackP(fileName, 5, 100); // �ص����⽻ ѹ���Ľ������
}

// ����ָ��2
int mainT9_225() {

    // 1 ���������
    // VS  Clion ͨ���ˣ�  Linux ���ܲ�ͨ������Ϊ�������Ϲ淶��
    // void (* call) (char *, int ,int) = callBackMethod;

    // ����temp��˼·һ���ĸо�
    //  2 �ٻ������ַ�ʽ ���ڶ���д����
    // Linux  �ȶ��壬 �ٸ�ֵ
    void (* call) (char *, int ,int);
    call = &callBackMethod;

    void (* call2) (char *, int ,int);
    void (* call3) (char *, int ,int);
    void (* call4) (char *, int ,int);

    void (* call5) (char *, int ,int);
    call5 = &callBackMethod; // &callBackMethod 1000H  == callBackMethod 1000H

    compress("derry.png", call5);

    // ����ָ��  ָ�볣��   ������ָ�롿

    // �ַ���  ���������� + C����
    // char * c = "Derry" + "A";
}
