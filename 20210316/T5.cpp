// 3.C++�����У�Ϊʲô��Ҫ this��

#include <iostream> // iostream.h ����C++�ķ�ʽ

using namespace std;

class Student {
private:
    char *name;
    int age;

public:
    static int id; // ������

public:
    void setName(char *name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    char *getName() {
        return this->name;
    }
    int getAge() {
        return this->age;
    }

public:
    // Ĭ�ϵĹ��캯�� ջ�����ٿռ� ��¶ ��ַ == thisָ�� (��Javaһ�µ�˼·)
};

// ��ʵ��
int Student::id = 9527;

int main() {
    // ======= ����ʹ���¶���
    Student student;
    student.setAge(99);
    student.setName("Derry");
    cout << student.getName() << " , " << student.getAge()<< endl;

    // ==========  this ����
    Student student1;
    student1.setAge(88); // ����ֵ��ʱ������ô֪���Ǹ�student1��age����ֵ�ģ�
    student1.id = 880;

    Student student2;
    student2.setAge(99); // ����ֵ��ʱ������ô֪���Ǹ�student2��age����ֵ�ģ�
    student2.id = 990;

    Student::id = 666;

    // ����ô֪���ǻ�ȡstudent1��age
    cout << " student1.getAge:" << student1.getAge() << endl;

    // ����ô֪���ǻ�ȡstudent2��age
    cout << " student2.getAge:" << student2.getAge() << endl;

    cout << "student1.id:" << student1.id << endl;
    cout << "student2.id:" << student2.id << endl;
    cout << "Student:::" << Student::id << endl;


    return 0;
} // main������ջ�� ��ʿ���룺��ջ����delete student ...�� ������Ҫ�Լ��ֶ�delete��

