// 3.��������ת���� const_cast     const���ε� ������ȥת��

//const_cast	ȥ�����͵�const��volatile����
//static_cast	������ת������̬����ת��
//dynamic_cast	������ת������̬����ת��������ʱ������Ͱ�ȫ��ת��ʧ�ܷ���NULL��
//reinterpret_cast	�����½������ͣ���û�н��ж����Ƶ�ת��

#include <iostream>

using namespace std;

class Person {
public:
    string name = "default";
};

int main() {
    const Person * p1 = new Person();
//     p1->name = "Derry"; // ��������ָ�룬��д�޸�ֵ

    Person * p2 = const_cast<Person *>(p1); // ת�� �ǳ���ָ��
    p2->name = "Derry";

    cout << p1->name << endl;

    return 0;
}

