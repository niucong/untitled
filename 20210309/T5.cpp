// 3.���õ�ԭ����

#include <iostream>

using namespace std;

// ����������

// ָ��ȡ��ַ ����  C���Ե�һ�ڿε�����
// ����number1/number2�ĵ�ַ��ȡ�ĵ�ַ��ֵ������ɵĻ���
void numberChange(int * number1, int * number2) {
    int temp = 0;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

// C++�ᳫ������
void numberChange2(int & number1, int & number2) {

    // ������������ã�main numberChange2 �ڴ��ַ�ǲ�һ����
    // ����������ã�main numberChange2 �ڴ��ַ��һ���ģ�Ϊʲô�أ�
    cout << "numberChange2 " << "n1��ַ��" << &number1 << " , n2��ַ��" << &number2 <<endl;

    int temp = 0;
    temp = number1;
    number1 = number2;
    number2 = temp;
}

int main() {

    int number1 = 10;
    int number2 = 20;

    cout << "main " << "n1��ַ��" << &number1 << " , n2��ַ��" << &number2 <<endl;

//     numberChange(&number1, &number2);
    numberChange2(number1, number2);

    cout << "n1:" << number1 << " , n2:" <<  number2 << endl;

    cout << endl;

    // ������ʵ�飬��ѧԭ��

    // ��һ���֣������� &
    /*int n1 = 999;
    int n2 = n1;
    cout << &n1 << "---" << &n2 << endl;*/ // 0xffffcbb4---0xffffcbb0

    // �ڶ����֣�����&
    int n1 = 999;
    int & n2 = n1;
    int & n9 = n1;
    n2 = 777;
    n9 = 9527;
    cout << "��ַ��" << &n1 << "---" << &n2 << "---" << &n9 << endl;
    cout << "ֵ��" << n1 << "---" << n2 << endl;

    return 0;
}

