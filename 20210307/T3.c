//
// Created by Niucong on 2021/3/9.
//

// 2.�ļ��Ķ���

#include <stdio.h>
#include <stdlib.h> // �ļ��Ĳ������������ͷ�ļ������
//#include <string.h>

int main() {

    // fopen���ļ�����˼������1���ļ�·�� �ļ�Դ��  ����2��ģʽ r(��) w(д)  rb(��Ϊ�������ļ���) rw(��Ϊ�������ļ�д)  ����ֵ FILE �ṹ�壩
    // FILE * fopen (const char *, const char *);

    char * fileNameStr = "D:\\Temp\\DerryFile.txt";

    // ��Ȼ��ʹ����r����Ҫ��ǰ׼�����ļ�
    FILE * file = fopen(fileNameStr, "r");

    if (!file) {
        printf("�ļ���ʧ�ܣ����������⣺·��Ϊ%s·�����ļ���������ʲô����\n", fileNameStr);
        exit(0); // �˳�����
    }

    // �ȶ��建������ (����)
    char buffer[10];

    // 1.������buffer�� 2������10�� 3:�ļ�ָ�����
    while (fgets(buffer, 10, file)) {
        printf("%s", buffer);
    }

    // �ر��ļ�
    fclose(file);

    return 0;
}

