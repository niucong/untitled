// ��Сдת��(��дAPI)

#include <stdio.h>
#include <ctype.h>

// ָ������
void lower(char * dest, char * name) {
    char * temp = name; // ��ʱָ�룬��ֻ�ܲ�������ʱָ�룬�����ƻ�nameָ��
    while (*temp) {
        *dest = tolower(*temp);
        temp ++; // Ų��ָ��λ�� ++
        dest ++; // Ų��ָ��λ�� ++  Ŀ����Ϊ�� Ų��һ���洢һ�� Ų��һ���洢һ�� ...
    }
    // printf '\0'
    *dest = '\0'; // ����printf��ӡϵͳֵ

    printf("�����ƻ� name:%s\n", name); // temp�ĺô����ǣ������ƻ�name
}

// ȫ�����Сд derry
int main() {
    char * name = "DerrY";

    // �ȶ�����
    char dest[20];
    lower(dest, name);
    printf("Сдת����Ľṹ��:%s\n", dest);

    // ��ҵ��
    /*char * str = "Derry is";
    char * result;
    ����(&result, str, 2, 5);
    printf("%s\n", result); // ���������rry*/

    // ����-���ɹ�
    /*char * a = "ABCDEFG";
    char * b = "AB";
    int r = b - a;
    printf("r:%d\n", r);*/

    return 0;
}

