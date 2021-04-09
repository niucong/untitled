// TODO C++ ��ĩ����  -- ��д����ָ�� 2

#include "CustomPtr.h"

class Student {
public:
    ~Student() {
        cout << "�������� �ͷ�Student" << endl;
    }
};

// TODO ����ָ�����õ�
void action() {
    Student *student1 = new Student();
    Student *student2 = new Student();

    // TODO ��һ�����
//    shared_ptr<Student> sharedPtr1(student1);
//    shared_ptr<Student> sharedPtr2(student2);

    // TODO �ڶ������
//    shared_ptr<Student> sharedPtr1 (student1);
//    shared_ptr<Student> sharedPtr2 = sharedPtr1;

    // TODO ͨ�õĴ�ӡ
//    cout << "����ָ�����õ� sharedPtr1:" << sharedPtr1.use_count() << endl;
//    cout << "����ָ�����õ� sharedPtr2:" << sharedPtr2.use_count() << endl;
}

// TODO  ��д������ָ��
void action2() {
    Student *student1 = new Student();
    Student *student2 = new Student();

    // TODO ��һ�����
//    Ptr<Student> sharedPtr1(student1);
//    Ptr<Student> sharedPtr2(student2);

    // TODO �ڶ������
//    Ptr<Student> sharedPtr1 (student1);
//    Ptr<Student> sharedPtr2 = sharedPtr1;

    // TODO �ڶ������
    // TODO ���һ
//    Ptr<Student> sharedPtr1 (student1); // sharedPtr1��������
//    Ptr<Student> sharedPtr2; // sharedPtr2Ҳ�ṹ������ �˶���ָ����object �� count�������ͷ�
//
//    // ����д�������֮ǰ���ұ����Ƿ� sharedPtr2 ������ object count ȫ���ͷ�
//    // sharedPtr2��ȫ�ͷŸɾ����Ҳŷ���Ȼ�㸳ֵ sharedPtr2 = sharedPtr1
//    sharedPtr2 = sharedPtr1;


    // TODO �����
    Ptr<Student> sharedPtr1 (student1); // sharedPtr1��������
    // student2 ��ΪҰ����ÿһ������ָ�����Ķ��� ��Ϊ Ұ����
    Ptr<Student> sharedPtr2 (student2);

    // ����д�������֮ǰ���ұ����Ƿ� sharedPtr2 �� �� student2 ȫ���ͷųɹ�
    // sharedPtr2��ȫ�ͷŸɾ���,�ŷ���Ȼ�㸳ֵ sharedPtr2 = sharedPtr1

    sharedPtr2 = sharedPtr1;

    // delete student2; // ���--��Щ�߼���д���ͱ����ֶ��Ƿ� student2

    // TODO ͨ�õĴ�ӡ
    cout << "��д������ָ�� sharedPtr1:" << sharedPtr1.use_count() << endl;
    cout << "��д������ָ�� sharedPtr2:" << sharedPtr2.use_count() << endl;
}


int main() {
//    cout << "������ C++��������ָ�� ===========" << endl;
//    action();
//    cout << endl;

    cout << "������ �Զ��������ָ�� ===========" << endl;
    action2();
}



