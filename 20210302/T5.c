// �ַ������ң�������ƴ�ӡ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char * text = "name is Derry";
    char * subtext = "D";

    char * pop = strstr(text, subtext);

    // ��ôȥ �ַ�������
    if (pop) { // ��NULL���ͽ���if���Ͳ��ҵ���
        printf("���ҵ���,pop��ֵ��:%s\n", pop);
    } else {
        printf("û�в��ҵ�,subtext��ֵ��:%s\n", subtext);
    }

    // ������D��
    if (pop) {
        printf("������\n");
    } else {
        printf("û�а���\n");
    }

    // printf("pop��ַ%p�� text��ַ:%p,\n", pop, text);

    // ��ȡλ�ã�  ������һ���������ڴ�ռ䣬û�жϲ㣬���Կ���-
    int index = pop - text; // pop="Derry" - text"name is Derry"
    printf("%s��һ�γ��ֵ�λ����:%d\n", subtext, index); // �ҵ�D�ڵ�8��λ��

    // ָ���ǿ��ԣ�++ --  +=  -=

    // ƴ�� ========================
    char destination[25]; // ���� 25�Ĵ�С �Ѿ�д����
    char * blank = "--��--", *CPP="C++", *Java= "Java";

    strcpy(destination, CPP); // ��Copy����������ȥ
    strcat(destination, blank); // Ȼ����ƴ��
    strcat(destination, Java); // Ȼ����ƴ��
    printf("ƴ�Ӻ�Ľ��:%s\n", destination); // C++--��--Java

    return 0;
}

