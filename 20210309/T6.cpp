// �������á�

#include <iostream>
#include <string.h>

using namespace std;

// �����ͳһ��
typedef struct {
    char name[20];
    int age;
}Student;

// �������ã�Student��׼��� == const Student &
// �������ݿ⣬Student����Ϣ���������ݿ�
void insertStudent(const Student & student) {
    // �ڹ� �Ե�
//     strcpy(student.name, "��Ԫ��"); // ���������޸�

    Student student2 = {"����", 43};
//     student = student2; // ���������޸�

    // ֻ�����ˣ����԰��Ĳ������ݿ���
    cout << student.name << "," << student.age << endl;
}

int main() {

    // �û��ύ��Student����
    Student student = {"���޼�", 30};
    insertStudent(student);

    return 0;
}

