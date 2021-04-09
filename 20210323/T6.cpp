// �麯��  ���麯�� ȫ���麯����C++û�нӿڣ� �ȼ���  6.ȫ���麯����Java��ӿڣ���

#include <iostream>
using namespace std;

class Student {
    int _id;
    string name;
    int age;
};

// �������еĺ��� �����Ǵ��麯�������൱�� Java�Ľӿ���
class ISudent_DB {
    virtual void insertStudent(Student student) = 0;
    virtual void deleteStudent(int _id) = 0;
    virtual void updateStudent(int _id, Student student) = 0;
    virtual Student queryByStudent(Student student) = 0;
};

// Java��ʵ����
class Student_DBImpl1 : public ISudent_DB {
public:
    void insertStudent(Student student) {
        // ���������ʡ�Դ���...
    }

    void deleteStudent(int _id) {
        // ɾ��������ʡ�Դ���...
    }

    void updateStudent(int _id, Student student) {
        // ���²�����ʡ�Դ���...
    }

    Student queryByStudent(Student student) {
        // ��ѯ������ʡ�Դ���...
    }
};

// Java��ʵ����
class Student_DBImpl2 : public ISudent_DB {
public:
    void insertStudent(Student student) {
        // ���������ʡ�Դ���...
    }

    void deleteStudent(int _id) {
        // ɾ��������ʡ�Դ���...
    }

    void updateStudent(int _id, Student student) {
        // ���²�����ʡ�Դ���...
    }

    Student queryByStudent(Student student) {
        // ��ѯ������ʡ�Դ���...
    }
};

// Java��ʵ����
class Student_DBImpl3 : public ISudent_DB {
public:
    void insertStudent(Student student) {
        // ���������ʡ�Դ���...
    }

    void deleteStudent(int _id) {
        // ɾ��������ʡ�Դ���...
    }

    void updateStudent(int _id, Student student) {
        // ���²�����ʡ�Դ���...
    }

    Student queryByStudent(Student student) {
        // ��ѯ������ʡ�Դ���...
    }
};

int main() {
    Student_DBImpl1 studentDbImpl1;
    Student_DBImpl2 studentDbImpl2;
    Student_DBImpl3 studentDbImpl3;

    cout << "Success" << endl;

    return 0;
}


