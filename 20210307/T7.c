// TODO ���ļ��ļ��ܡ�
// �ļ����� �� �ļ�����  �����Ƶķ�ʽ������  .txt  .png  ...

#include <stdio.h>
#include <stdlib.h> // �ļ��Ĳ������������ͷ�ļ������
#include <string.h>

int main() {
    char * fileNameStr = "D:\\Temp\\IMG.jpg"; // ��Դ
    char * fileNameStrEncode = "D:\\Temp\\IMG_encode.jpg"; // ���ܺ��Ŀ���ļ�

    FILE * file = fopen(fileNameStr, "rb"); // r �����ֽ���ǰ׼�����ļ�
    FILE * fileEncode = fopen(fileNameStrEncode, "wb"); // w ����һ��0kb���ļ�

    if (!file || !fileEncode) {
        printf("�ļ���ʧ�ܣ����������⣺·��Ϊ%s·�����ļ���������ʲô����\n", fileNameStr);
        exit(0); // �˳�����
    }

    // ������ �� ���� �� ˼·��
    // ���� == �ƻ��ļ�
    // ���� == ��ԭ�ļ� ��ԭ֮ǰ������

    // ---
    // ���ܵ��뷨����ȫ������ÿһ���ֽڶ��ó�������ÿһ���ֽڶ�ȫ������ �����ּ��ܣ���ĳһ���������ó�������
    // TODO ���ܵ��뷨
    // while ѭ��������ʱ��  ȡ������  10
    // 10 ^��� 5   �ͱ�����Ч��1111

    /// TODO ���ܵ��뷨
    // while ѭ��������ʱ��  ȡ������  1111
    // 1111 ^��� 5  �ͱ�����Ч��10����ԭ��

    int c; // ���ն�ȡ��ֵ

    // fgetc(�ļ�ָ��)  ����ֵ EOF = end fo file
    while ((c = fgetc(file)) != EOF) {
        // ���ܲ���
        fputc(c ^ 5, fileEncode ); // д�뵽 fileEncode  D:\Temp\IMG_encode.jpg�����ܺ��ͼƬ��
    }

    // �ر��ļ�
    fclose(file);
    fclose(fileEncode);

    return 0;
}
