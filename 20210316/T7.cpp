// ��Ԫ����

// ���⣺�������ĺ����ѣ��ǾͿ�����˽�г�Ա��������

#include <iostream>

using namespace std;

class Person {
private: // ˽�е�age����粻�ܷ���
    int age = 0;

public:
    Person(int age) {
        this->age = age;
    }

    int getAge() {
        return this->age;
    }

    // ������Ԫ���� (������û��ʵ��)
    friend void updateAge(Person * person, int age);
};

// ��Ԫ������ʵ�֣����Է�������˽�г�Ա
void updateAge(Person* person, int age) {
    // Ĭ������£������޸� ˽�е�age
    // ˭�����Ȩ�ޣ���Ԫ���õ�����˽�г�Ա��
    person->age = age;
}

int main() {
    Person person = Person(9);
    updateAge(&person, 88);

    cout << person.getAge() << endl;
    return 0;
}
