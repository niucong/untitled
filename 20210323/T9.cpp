// ����㣺 �̳й�ϵ��ʱ�򣬹��캯������������ ��˳������

#include <iostream>

using namespace std;

class Person {
public:
    string name;

    Person(string name) : name(name) {cout << "Person���캯��" << endl;}

    ~Person()  {cout << "Person��������" << endl;}

    virtual void test() {
        cout << "�� test..." << endl;
    }
};

class Student : public Person {
public:
    string name;

    Student(string name) : Person(name) {
        cout << "Student���캯��" << endl;

        // Person::test();
    }

    ~Student()  {cout << "Student��������" << endl;}

    void test() {
        cout << "�� test..." << endl;
    }
};

int main() {
    Student student("Derry");
    // Person���캯��
    // Student���캯��
    // Student��������
    // Person��������
//    student.test();

    Student student1("A");
    student1.test();

    return 0;
}

