//
// Created by Niucong on 2021/3/9.
//

// 4.�ļ��ĸ��ơ�

#include <stdio.h>
#include <stdlib.h> // �ļ��Ĳ������������ͷ�ļ������
#include <string.h>

// �������ļ������� rb rw
int main() {

    // https://en.cppreference.com/w/c/io

    char * fileNameStr = "D:\\Temp\\DerryFile.txt"; // ��Դ
    char * fileNameStrCopy = "D:\\Temp\\DerryFileCopy.txt"; // Ŀ��

    // rb ��ȡ����������
    FILE * file = fopen(fileNameStr, "rb");

    // rw д�����������
    FILE * fileCopy = fopen(fileNameStrCopy, "wb");

    if (!file || !fileCopy) {
        printf("�ļ���ʧ�ܣ����������⣺·��Ϊ%s·�����ļ���������ʲô����\n", fileNameStr);
        exit(0); // �˳�����
    }

    int buffer[1024]; // 514 * 4 = 2048
    int len; // ÿ�ζ�ȡ�ĳ���

    // fread������1������buffer�� ����2��ÿ��ƫ�ƶ��� int�� ����3��������С д��2048�������ļ��ͱ�����
    // sizeof(buffer) / sizeof(int) �ȼ��� 514
    while ((len = fread(buffer, 1, 1024 , file)) != 0) {
        fwrite(buffer, 1, len, fileCopy);
    }

    // �ر��ļ�
    fclose(file);
    fclose(fileCopy);

    return 0;
}
