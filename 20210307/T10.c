// TODO ���ļ��Ľ��ܣ�ʹ����Կ��

#include <stdio.h>
#include <stdlib.h> // �ļ��Ĳ������������ͷ�ļ������
#include <string.h>

int main() {

    char * fileNameStr = "D:\\Temp\\IMG_encode.jpg"; // ��Դ
    char * fileNameStrDecode = "D:\\Temp\\IMG_decode.jpg"; // ���ܺ��Ŀ���ļ�

    FILE * file = fopen(fileNameStr, "rb"); // r �����ֽ���ǰ׼�����ļ�
    FILE * fileDecode = fopen(fileNameStrDecode, "wb"); // w ����һ��0kb���ļ�

    if (!file || !fileDecode) {
        printf("�ļ���ʧ�ܣ����������⣺·��Ϊ%s·�����ļ���������ʲô����\n", fileNameStr);
        exit(0); // �˳�����
    }

    // ��Կ
    char * password = "123@#%^456asw"; // �������������飺�ҵ���Կ ������Ч

    int  c;
    int index = 0;
    int pass_len = strlen(password);
    while ((c = fgetc(file)) != EOF) {
        fputc(c ^ password[index%pass_len], fileDecode);
        index++;
    }

    fclose(file);
    fclose(fileDecode);

    return 0;
}

