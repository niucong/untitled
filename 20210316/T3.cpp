// 2.C++static�ؼ��֡� �����д��

#include <iostream>

using namespace std;

class Dog {
public:
    char * info;
    int age;

    // �Ѿ����벻�ɹ���������������ʼ��
    // static int id = 9;
    static int id;

    Dog() {
        // ���б���
        // id = 9;
    }

    static void update() {
        // ���б���
        // id = 9;
    }

    void update2() {
        // ���б���
        // id = 9;
    }
};

int main() {
    Dog dog;
    Dog::update(); // ����::���Ե��þ�̬����
    return 0;
}