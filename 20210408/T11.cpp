#include <iostream>
using namespace std;

void show(int * i) {
    cout << " show(int * i) " << endl;
}

void show(int  i) {
    cout << " show(int  i) " << endl;
}

int main() {
    show(9);

    show(nullptr); // C++11 ������ԣ� ԭ���������NULL�����˴���NULL�����д˹���

    return 0;
}
