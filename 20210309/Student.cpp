#include "Student.h"

// ���� Student.h ͷ�ļ� ��дʵ��

// ��ʵ��ͷ�ļ��Ǹ�������û���κι�ϵ���൱������һ������
/*void setAge(int age) {

}*/

void Student::setAge(int age) { // ʵ�ֺ���
    // C++����ָ�����һ��ָ��
    // -> ����һ��ָ��ĳ�Ա
    this->age = age;
}
void  Student::setName(char * name) { // ʵ�ֺ���
    this->name = name;
}

void Student::setSex(bool sex) {
    this->sex = sex;
}

int Student::getAge() { // ʵ�ֺ���
    return this->age;
}
char * Student:: getName() { // ʵ�ֺ���
    return this->name;
}
bool Student::getSex() {
    return this->sex;
}