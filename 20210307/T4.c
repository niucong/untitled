//
// Created by Niucong on 2021/3/9.
//

// 3.�ļ���д��

#include <stdio.h>
#include <stdlib.h> // �ļ��Ĳ������������ͷ�ļ������
#include <string.h>

int main() {

    // fopen���ļ�����˼������1���ļ�·�� �ļ�Դ��  ����2��ģʽ r(��) w(д)  rb(��Ϊ�������ļ���) rw(��Ϊ�������ļ�д)  ����ֵ FILE �ṹ�壩
    // FILE * fopen (const char *, const char *);

    char * fileNameStr = "D:\\Temp\\DerryFileW.txt";

    // ��Ȼ��ʹ����w�������Զ������ļ� 0kb
    FILE * file = fopen(fileNameStr, "w");

    if (!file) {
        printf("�ļ���ʧ�ܣ����������⣺·��Ϊ%s·�����ļ���������ʲô����\n", fileNameStr);
        exit(0); // �˳�����
    }

    fputs("Derry Success run...̫���ˣ�", file);

    // �ر��ļ�
    fclose(file);

    return 0;
}

