#include <iostream>
#include <stdarg.h> // �ɱ������֧��
using namespace std;

// Java�Ŀɱ����: int ...
// C++�Ŀɱ����д����...
// count�ĵ�һ���ô����ڲ���Ҫһ�� �洢��ַ�õĲο�ֵ�����û�еڶ����������ڲ����޷������Ų�����Ϣ
void sum(int count, ...) {
    va_list vp; // �ɱ�����Ķ���

    // ����һ���ɱ������ʼ�Ķ���vp
    // ���������ڲ���Ҫһ�� �洢��ַ�õĲο�ֵ�����û�еڶ����������ڲ����޷������Ų�����Ϣ
    va_start(vp, count);

    // �������vp���Ѿ��зḻ����Ϣ

    // ȡ���ɱ������һ��ֵ
    int number  = va_arg(vp, int);
    cout << number << endl;

    // ȡ���ɱ������һ��ֵ
    number  = va_arg(vp, int);
    cout << number << endl;

    // ȡ���ɱ������һ��ֵ
    number  = va_arg(vp, int);
    cout << number << endl;

    // Խ�� ϵͳֵ ����
    // ȡ���ɱ������һ��ֵ ��Ȣ�����󣬻�ȡϵͳֵ ���롿
    number  = va_arg(vp, int);
    cout << number << endl;

    // �رս׶�
    va_end(vp);
}

// 1.�ɱ����
int main() {
    std::cout << "ͬѧ�Ǵ�Һã�����Derry" << std::endl;

    sum(546, 6,7,8);

    return 0;
}
