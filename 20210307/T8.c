// TODO ���ļ��Ľ��ܡ�

#include <stdio.h>
#include <stdlib.h> // �ļ��Ĳ������������ͷ�ļ������
#include <string.h>

int main() {

    char *fileNameStr = "D:\\Temp\\IMG_encode.jpg"; // ��Դ
    char *fileNameStrDecode = "D:\\Temp\\IMG_decode.jpg"; // ���ܺ��Ŀ���ļ�

    FILE * file = fopen(fileNameStr, "rb"); // r �����ֽ���ǰ׼�����ļ�
    FILE * fileEncode = fopen(fileNameStrDecode, "wb"); // w ����һ��0kb���ļ�

    if (!file || !fileEncode) {
        printf("�ļ���ʧ�ܣ����������⣺·��Ϊ%s·�����ļ���������ʲô����\n", fileNameStr);
        exit(0); // �˳�����
    }

    int c;
    while ((c = fgetc(file)) != EOF) {
        // ���ܲ��� 1111 ^ 5 = 10������ԭ��
        fputc(c ^ 5, fileEncode);
    }

    fclose(file);
    fclose(fileEncode);

    return 0;
}