//
// Created by Niucong on 2021/3/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1.����Լ�ѧ���Ķ�C����API�ĵ�
//int main() {
//
//    // ���ĵ���˼·��
//    // 1.�����ĵ�����ҪCopy����ѧ��
//    // 2. ���� &t  &p   ����ֱ�Ӵ��� NULL ����
//
//    // ʱ�䵥λ ��������
//    srand((unsigned) time(NULL));
//
//    int i;
//    for (i = 0;  i< 10 ; i++) {
//        printf("�����%d\n", rand() % 100);
//    }
//
//    return(0); // return 0;
//}


// �ַ�����Copy����
/*������: strcpy
        ��  ��: ������
        ��  ��: char *strcpy(char *str1, char *str2);
������:*/

#include <stdio.h>
#include <string.h>

//int main(void)
//{
//    char string[10]; // ����һ������
//    char *str1 = "abcdefghi"; // �ַ�������
//
//    strcpy(string, str1); // ���ǰ� str1 ���Ƶ� ����
//    printf("%s\n", string); // ��ӡ����
//    return 0;
//}

// C�е� ����
int mainT2_228() {

    // Java Boolean

    // ��0��true�� 0����false

    if (0) {
        printf("��\n");
    } else {
        printf("��\n");
    }

    if (43665) {
        printf("��\n");    // 1  ��
    } else {
        printf("��\n");    // 2
    }

    if (-545) {
        printf("��\n");    // 1
    } else {
        printf("��\n");    // 2
    }


    return 0;
}



