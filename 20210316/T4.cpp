// 2.C++static�ؼ��֡� ��ȷ��д��

/**
 * ��̬���ܽ᣺
 * 1.����ֱ��ͨ������::��̬��Ա���ֶ�/������
 * 2.��̬�����Ա���Ҫ��ʼ����Ȼ����ʵ�֣�����
 * 3.��̬�ĺ���ֻ��ȡ������̬�����Ժͷ�����Java��
 */

#include <iostream>

using namespace std;

class Dog {
public:
    char * info;
    int age;

    // ������
    static int id;

    static void update() {
        id += 100;

        // ����:��̬�������ܵ��÷Ǿ�̬������Java��
        // update2();
    }

    void update2() {
        id = 13;
//        update();
    }
};

// ��ʵ��
int Dog::id = 9;

int main() {
    Dog dog;
    dog.update2(); // ��ͨ����
    Dog::update(); // ��̬����
    dog.update(); // ������.��̬������һ�㶼��ʹ��::���þ�̬��Ա�����ַ�ʽ���� ֪�����У�

    cout << Dog::id << endl;
    return 0;
}
