// 1.Դ�������Գ�ʼ���ķ�ʽ��

#include <iostream>
using namespace std; // �Ѿ�������

// ����
class Person {
protected:
    // ע�⣺string �� std �����ռ�����ĳ�Ա��C++Դ��������д��std::string
    // string�ڲ���ʵ���Ƕ� char*�ķ�װ
    string name;
    int age;
public:
    Person(string name, int age) :name(name), age(age) {}
};

// �γ���
class Course {
private:
    string name;
public:
    Course(string name) :name(name) {}
};

class Student : public Person {
private:
    // ���������Ƕ����Ա������������ʼ��(���캯���ĺ��� : �����Ա(����))  ʹ�����ǵĵڶ��ַ�ʽ
    Course course; // �����Ա
public:
    Student(string name, int age, Course course1, string courseNameInfo)
    :Person(name, age) // ��Ȼ�̳��˸���ͱ��������Ĺ��캯����ʼ��

    // ,

    // course(course1) // �ڶ��ַ�ʽ������׶��Ͽɵ� ����=����   ����ֱ�ӵĸ�ֵ����

     ,

     course(courseNameInfo) // �����ַ�ʽ�� ����(string����)  ֱ�ӳ�ʼ��Course���� --- ���캯��

    {
        // this->course = course1; // ��һ�ַ�ʽ������=���� ����׶β��Ͽɣ��޷���⵽���Ƿ���ĸ�course�����Ա��ʼ����
    }
};

int main() {
    Course c("C++");
    Student student("Derry", 30, c, "NDK�������");

    return 0;
}
