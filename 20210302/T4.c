// 4.�ַ���ת�����ַ����ıȽϡ�

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��ݼ��������� shift��  ѡ�� file encoding

// ������C���ԣ���Linux��ѧ����VIM�ϲ���רҵ��
int main() {
    // �ַ���ת�� =======================
    char * num = "1"; // �ַ���
    num = "12.68";

    // ��int��
    int result =  atoi(num);
    if (result) { // ��0��ture  ����0����if��  0����ת��ʧ����
        printf("��ϲ��ת���ɹ�:%d\n", result);
    } else {
        printf("ת��ʧ�ܣ�\n");
    }

    // ��double��
    double resultD =  atof(num);
    printf("��ϲ��ת���ɹ�:%lf\n", resultD);


    // �ַ����ıȽ� ======================
    char * str1 = "Derry";
    char * str2 = "derry";

     int resultC = strcmp(str1, str2); // strcmp = ���ִ�Сд
//    int resultC = strcmpi(str1, str2); // strcmpi = �����ִ�Сд

    if (!resultC) { // 0��������ȵģ� ��0�����ǲ���ȵ�
        printf("���");
    } else {
        printf("�����");
    }

    return 0;
}

