#include <iostream>

using namespace std;

// Student.h ͷ�ļ�  ֻд��������дʵ��

class Student {

private: // ����Ĵ��루��Ա�ͺ�����������˽��
    char * name;
    int age;
    bool sex;

public: // ����Ĵ��루��Ա�ͺ����������ǹ���
    // set get
    void setAge(int age); // ��������
    void setName(char * name); // ��������
    void setSex(bool sex);
    int getAge(); // ��������
    char * getName(); // ��������
    bool getSex();
};
