// ָ�볣�� ����ָ�� ����ָ�볣��

#include <iostream>
#include <string.h>
#include <string.h>

using namespace std;

int main() {

    // *strcpy (char *__restrict, const char *__restrict);
    // strcpy()


    int number = 9;
    int number2 = 8;

    // ������� һ���Ӹ㶨

    // ����ָ��
    const int * numberP1 = &number;
    // *numberP1 = 100; // ����������ȥ�޸ġ�����ָ�롿��ŵ�ַ����Ӧ��ֵ
    // numberP1 = &number2; // OK����������ָ�򡾳���ָ�롿��ŵĵ�ַ

    //  ָ�볣��
    int* const numberP2 = &number;
    *numberP2 = 100; // OK������ȥ�޸ġ�ָ�볣������ŵ�ַ����Ӧ��ֵ
    // numberP2 = &number2; // ��������������ָ��ָ�볣������ŵĵ�ַ

    // ����ָ�볣��
    const int * const numberP3 = &number;
    // *numberP3 = 100; // ����������ȥ�޸ġ�����ָ�볣������ŵ�ַ����Ӧ��ֵ
    // numberP3 = &number2; // ��������������ָ�򡾳���ָ�볣������ŵĵ�ַ

    return 0;
}

