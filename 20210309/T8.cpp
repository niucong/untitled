// C++���Եĺ������� ��֧�ֵ�

#include <iostream>

using namespace std;

// Java���캯��  50���ֶΣ�������ʹ�õģ�ֻ��6��
// ���������ģʽ ȥ���������

// int add(int number1, int number2) = number1 + number2; // �����KTд��

int add(int number1) {
    return number1;
}

int add(int number1, int number2) {
    return number1 + number2;
}

// C++���� == Java����
int add(int number1, int number2, int number3) {
    return number1 + number2 + number3;
}

// �������� ������
// �Լ���ʵ��
// Ĭ���вθ�ֵ��   // KTҲ��Ĭ���вθ�ֵ   ����Ѱ��Ĭ���вθ�ֵ�ĺ����� ��˳���޹�
int add(double n1 = 100, int n2 = 200, int n3 = 300, int n4 = 400, bool isOK = 0) {
    return 0;
}

// ���棺����˳������⣿

int main() {
    add(999);

    add(999, 777);

    add(100, 200, 888);

    return 0;
}

