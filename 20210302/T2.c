#include <stdio.h>

// �ַ���
int main() {
    char str[] = {'D', 'e', 'r', 'r', 'y', '\0'};
    str[2] = 'z'; // �������޸ģ�
    printf("��һ�ַ�ʽ��%s\n", str); // printf �������� \0 �Ž���

    char * str2 = "Derry"; // ��ʿ  Derry+\0
    str2[2] = 'z'; // �ᱼ����Ϊʲô����������ʣ�Ϊʲô ��ͼ  ԭ��ͼ
    printf("�ڶ��ַ�ʽ��%s\n", str);

    return 0;
}