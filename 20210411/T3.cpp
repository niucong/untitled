// ���ȡ�� #undef ��

#include <iostream>

using namespace std;

int main() {
    int i = 1;

#ifndef DERRY // ���û�ж��������
#define DERRY // �ҾͶ����
#ifdef DERRY // �Ƿ����������
    for (int i = 0; i < 6; ++i) {
        cout << "Derry 1" << endl;
    }
    // ʡ�� 500�� ...

#ifdef DERRY // �Ƿ����������
    for (int i = 0; i < 6; ++i) {
        cout << "Derry 2" << endl;
    }
    // ʡ�� 500�� ...

#undef DERRY // ȡ����Ķ��壬����Ĵ��룬��û����������ˣ��൱�ڣ�û�ж����DERRY��

#ifdef DERRY
    cout << "�㶨����Derry��" << endl;
#else
    cout << "��û�ж�����Derry��" << endl;

#endif
#endif
#endif
#endif

    return 0;
}

