#include <stdio.h>

void substrAction3(char * result, char * str, int start, int end) {
    for (int i = start; i < end; ++i) {
        *(result++) = *(str + i);
    }
}

int main() {
    char * str = "Derry is";

    // char * result = "ABCDEFG"; (�ᱨ����Ϊ��׼�޸ĳ���ֵ)

    // char * result = NULL;  (�ᱨ����Ϊ��׼�޸�NULLֵ)
    // VS������Ұָ�루�ϸ�

    // char * result; // ����ǲ�ͨ���� �ŶԵ�  VS ��ͨ���Ե�

    // �����ջ�����ٿռ�[�Ƽ���ʽ]
    char result[100] = "ABC";

    substrAction3(result, str, 2, 5);
    printf("%s\n", result);


//    // �������ط������ˣ�
//   // char arry1[]={'1','2'}; // �����Զ�����\0
//   // һ��ָ�룬�ַ�ָ�룬����
//   char * arry = "21"; // ���Զ�����\0
//    // char arry[10] = "12";
//    char arry3[10] = "12";

    return 0;
}

