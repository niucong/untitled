// 5.C++�������

#include "Student.h"

int main() {
    // �淶д����Ҫ�� ͷ�ļ�.h .hpp   --   ʵ���ļ� .c  cpp

    std::cout << 1 << std::endl;


    // TODO  =======      ������ջ�ռ�

    Student student1; // ջ�����ٿռ��

    // ��ֵ
    student1.setAge(99);
    student1.setName("������");
    student1.setSex(true);

    cout << "name:" << student1.getName() << " ,age:" << student1.getAge() << " ,sex:" << student1.getSex() << endl;


    // TODO  =======      �����Ƕѿռ�

    Student * student2 = new Student(); // new/delete

    // ��ֵ
    student2->setAge(88);
    student2->setName("��Ԫ��");
    student2->setSex(false);

    cout << "name:" << student2->getName() << " ,age:" << student2->getAge() << " ,sex:" << student2->getSex() << endl;

    if (student2)
        delete student2; // �����ֶ��ͷŶѿռ�Ķ���student2
        student2 = NULL; // ָ��NULL�ĵ�ַ����
        // free(student2); // ��������д�����淶���ᱻ���ӵ�

    return 0;


    // �Ժ�����ѧϰC++��ʱ��Derry����û��дͷ�ļ����ǲ��淶�ģ���ֻ��Ϊ�˽���
    // ��ʵ���������У�����淶����
    // ��������̣���xxx.so��C/Cpp��ʵ�ִ��룩 �û��õ�xxx.so���� ͷ�ļ�


} // main������ջ�󣬻��ͷ�ջ��Ա student1

