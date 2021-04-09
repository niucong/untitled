// 4.�������캯����

#include <iostream>
#include <string.h>

using namespace std;

class Student {

public:
    Student() { cout << "�ղ������캯��" << endl; }

    // ���������Ĺ��캯��
    Student(char *name, int age) : name(name), age(age) {
        cout << "�����������캯��" << endl;
    }

    // ��������
    // ~Student(char * name) { } ����д���Ͳ������������ˣ����������д��C/C++���������������
    ~Student() {
        cout << "��������" << endl;
    }

    // ��ǰ��Ĭ����һ���������캯����stu2 = stu1 Ĭ�ϸ�ֵ ����ʿ �㿴������

    // �������캯������Ĭ���У����ǿ�������һ������д�������캯�����Ḳ����
    // ����1 = ����2
    // ���ǿ������캯��
    Student(const Student & student) { // �������ã�ֻ���ģ��������޸�
        cout << "�������캯��" << endl;

        // �����Լ���ֵ
        // ΪʲôҪ�Լ���ֵ���Լ������ƣ��Ϳ��� ���磺-10
        this->name = student.name;
        this->age = student.age - 10;

        cout << "�Զ��忽�����캯�� �ڴ��ַ " << &student << endl;
    }

// ˽������
private:
    char *name;
    int age;

// ������ set get ����
public:
    int getAge() {
        return this->age;
    }

    char *getName() {
        return this->name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setName(char *name) {
        this->name = name;
    }
};

struct Person {
    int age;
    char *name;
};

// TODO = �ŵ����� ��ʿ���룬���� �������캯��
//int main() {
//    Person person1 = {100, "������"};
//
//    // = �㿴������û��ʲô���⣬��ʿ�Ĵ��룺�㿴����  C/C++������ ���p1�ĳ�Աֵ��ֵ��p2��Ա
//    Person person2 = person1;
//
//    cout << &person1 << endl;
//    cout << &person2 << endl;
//
//    cout << person2.name << ",  " << person2.age << endl;
//
//    // ˼�������� ����1=����2  Ĭ�ϵ� �������캯��
//
//    return 0;
//}

// TODO  �������캯��
//int main() {
//    Student stu1("���", 34);
//    Student stu2 = stu1;
//
//    cout << stu2.getName() << " , " <<  stu2.getAge() <<  endl;
//    cout << "main " << &stu1 << endl; // ��ַ�Ĵ�ӡ��һ���ģ�  ע�⣺cnetos�Ļ��� ��ַ��ӡ�в��죬Ҫע��
//
//
//
//    // TODO  �������캯����ע��㣺
//    // Student stu1("���", 34);
//
//    // Student stu2;
//    // stu2 = stu1; // ������ֵ�ǲ������ �Զ��忽�����캯�������ǻ����Ĭ�ϸ�ֵ
//    // Student stu2 = stu1;  // ������ֵ�ǻ���� �Զ��忽�����캯���������Լ���ֵ
//
//    // cout << stu2.getName() << " , " <<  stu2.getAge() <<  endl;
//
//    getchar(); // ����ȴ�����һ��
//
//    return 0;
//} // main��������stu1ջ��Ա�����  stu2ջ��Ա�����

// TODO ����д�� �������캯��  ���׻᲻�����
int main() {
    Student *student1 = new Student("������", 39);

    Student *student2 = student1;  // ѹ���Ͳ���ִ�п������캯����ָ��ָ�����⣬�����Ǹո��Ǹ�  ����2=����1 �������£�

    // ԭ��Ϊʲô���᣿ ����

    student2->setAge(99);

    cout << student1->getName() << student1->getAge() << endl;

    // ��->������һ��ָ��ĳ�Ա    ��    ��.����ָ��Ĳ���  ��ɶ����

    return 0;
}

// Clion��VS����̫���ˣ��ŵ���һ�ڿΣ����� �ڴ��ַ�ķ������ȵȣ����½ڿν�
// �½ڿν��� �������캯���ģ���� �� ǳ����
