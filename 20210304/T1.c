//
// Created by Niucong on 2021/3/5.
//

// �Ͽ�ͨ��ģ��

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// TODO ��һ��   ͨ��
void substrAction1(char * result, char * str, int start, int end) {
    char * temp = str; // ������ʱָ�룬���ƻ�strָ��
    int count = 0; // ��¼��ǰ��λ��
    while (*temp) {
        // 2 �� 5 ��λ��  �ڽ�ȡ�ķ�Χ��
        if (count >= start && count < end) {
            *result = *temp; // *temp ȡ�� D e r r y ...
            result++; // ������ֵҲҪŲ����Ų��ָ��������   =   *temp���ҵ�ֵ
        }
        temp++; // ȡֵҲҪŲ��
        count++; // ��ǰ��λ��Ҫͬ��
    }
}

// TODO �ڶ���    ������ͬѧ��������  ջ�� ���� ���٣�1��
void substrAction2(char ** result, char * str, int start, int end) {
    char * temp = str; // ������ʱָ�룬���ƻ�strָ��

    // ������䣬��ȡ�����ö��٣���Լ
    char resultArr[end - start]; // ��ֻ��Ҫ���ȡ�Ĵ�С�ռ䣺���磺rry

    // ������Ҫʹ�õڶ��ַ�ʽ���ᱻC����ʦ���ӵģ�Ϊʲô�� �㿪�ٵģ���Ӧ�������
    // char * resultArr = malloc(end - start); // �������٣��ڶ��ֽ������

    int count = 0;
    for (int i = start; i < end; ++i) {
        resultArr[count] = *(temp + i); // *(temp + i);ȡ��D e r r y ��  ��������
        count++;
    }

    // * ȡ������ָ���һ��ָ�� ==  main������resultһ��ָ��

    // *result = resultArr; // ���������ǵ�һ��ָ�� ָ����������Ϊ�����ᱻ���յ�

    strcpy(*result, resultArr); // ��һ�ֽ������

    printf("%s\n", resultArr);

    // 1   2  ���ܻ��նѿռ䣬����main���� ��ӡ�˿�
    // free(resultArr);

} // ������ջ�󣬻�������е�ջ��Ա��������resultArr

// TODO ������    ���д���㶨
void substrAction3(char * result, char * str, int start, int end) { // û���漰ջ�� �����ĸ���
    // ������䣬��ȡ�����ö��٣���Լ ˼·
    for (int i = start; i < end; ++i) { // �պý��� ѭ������
        *(result++) = *(str+i); // i = 2
    }
}

// TODO ���İ�   һ�д���㶨
void substrAction4(char * result, char * str, int start, int end) {
    // ����1����������copy��result��������
    // ����2��ֱ�Ӵ�r��ʼ����Ϊ��һ�����ˣ�ָ��Ų����
    // ����3�����r��ʼ��Ų������
    strncpy(result, str+start, end - start);
}

// ����ȡ���ַ����Ľ�ȡ����
int main() {

    char *str = "Derry is";
    // ��������һ��ָ��
    char *result; // char * ����Ҫ��β��\0

    // ��ȡ�ڶ���λ�õ������λ�� 2��5

//     substrAction1(result, str, 2, 5);
//     substrAction2(&result,str, 2, 5);
//     substrAction3(result,str, 2, 5);
    substrAction4(result, str, 2, 5);

    printf("main ��ȡ�������ǣ�%s", result); // ���ս�ȡ��rry

//    if (result) {
//        free(result);
//        result = NULL;
//    }

    return 0;
}
