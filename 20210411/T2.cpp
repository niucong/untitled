

#include <iostream>
#include "T2.h"
using namespace std;

//#define DEBUG

int main() {

    // if �����ж�
    // ifdef xxx �Ƿ�����xxx�����

#ifdef DEBUG // �Ƿ�����DEBUG�����
    cout << "�ڲ��Ի����£���������" << endl;
    // ʡ�� 500�� ...

#else RELEASE
    cout << "����ʽ�����£�����������" << endl;
    // ʡ�� 500�� ...

#endif // ����IF

}

