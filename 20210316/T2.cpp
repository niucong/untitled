#include <iostream>
#include <stdarg.h> // �ɱ������֧��
using namespace std;

// Java�Ŀɱ����: int ...
// C++�Ŀɱ����д����...

// count�����ĵڶ����ô�������ѭ����������
void sum(int count, ...) {
    va_list vp; // �ɱ�����Ķ���

    // ����һ���ɱ������ʼ�Ķ���vp
    // ���������ڲ���Ҫһ�� �洢��ַ�õĲο�ֵ�����û�еڶ����������ڲ����޷������Ų�����Ϣ
    va_start(vp, count);

    // �������vp���Ѿ��зḻ����Ϣ

    for (int i = 0; i < count; ++i) {
        int r = va_arg(vp, int);
        cout << r << endl;
    }

    // �رս׶Σ��淶�����磺file�ļ�һ�� Ҫ�رգ�
    va_end(vp);
}

// 1.�ɱ����
int main() {

    sum(3, 6,7,8); // ��ʵ�������̵�д��

    return 0;
}