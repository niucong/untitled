#include <iostream>

using namespace std; // std ��ϵͳ�ģ����������У�  �½ڿν� �Զ��������ռ�

int main() {

    // bool  isOK = 1; // !0 ��true
    // bool  isOK = -8891; // !0 ��true
    // bool  isOK = 4359; // !0 ��true
    bool  isOK = 0; // 0 ��false

    // ֻ���������ͣ� !0   0
    // ��ǰ���Cһģһ��

    if (isOK) {
        cout << "��" << endl;
    } else {
        cout << "��" << endl;
    }

    // ==========================
    bool isRun = true;
    isRun = false;
    cout << isRun << endl; // true==1,   false=0

    return 0;
}

