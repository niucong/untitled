#include "Pig.h"

// TODO  ======================  ������ ����ͨͨ ������� ����::

// ʵ�ֹ��캯��
Pig::Pig() {
    cout << "Ĭ�Ϲ��캯��" << endl;
}

Pig::Pig(char * name) {
    cout << "1���������캯��" << endl;
}

Pig::Pig(char * name, int age) {
    cout << "2���������캯��" << endl;
}

// ʵ����������
Pig::~Pig() {
    cout << "��������" << endl;
}

// ʵ�� �������캯��
Pig::Pig(const Pig &pig) {
    cout << "�������캯��" << endl;
}

int Pig::getAge() {
    return this->age;
}
char * Pig::getName() {
    return this->name;
}
void Pig::setAge(int age) {
    this->age = age;
}
void Pig::setName(char * name) {
    this->name = name;
}

void Pig::showPigInfo() const {

} // ����ָ�볣�� ֻ��



// TODO ===============================  ��̬ �� ��Ԫ ע��� �Լ����

// ʵ�� ��̬���ԡ�����Ҫ���� static�ؼ��֡�
int Pig::id = 878;

// ʵ�־�̬������������Ҫ���� static�ؼ��֡�
void Pig::changeTag(int age) {

}

// ��Ԫ��ʵ��
// ��Ԫ���⣺����Ҫ�ؼ��֣�Ҳ����Ҫ ����:: ,ֻ��Ҫ��֤ ��������������
void changeAge(Pig * pig, int age) {

}

