#define _CRT_SECURE_NO_WARNINGS // strcpy���лᱨ��֧��

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:

	int age;
	char * name;

	Student() { cout << "�ղ������캯��" << endl; }

	Student(char * name) :Student(name, 99) {
		cout << "һ���������캯�� this:" << (int)this << endl;
	}

	Student(char * name, int age) {
		cout << "�����������캯�� this:" << (int)this << endl;

		this->name = (char *)malloc(sizeof(char *)* 10);
		strcpy(this->name, name);

		this->age = age;
	}

	~Student() {
		cout << "��������ִ�� &this->name:" << (int)this->name << endl;

		free(this->name);
		this->name = NULL;
	}

	// Ĭ����һ���������캯�� ��ʿ�� ���ǿ�����
	// һ����д�˿������캯����Ĭ�ϵĻ����� Java�Ĺ��캯��һ��˼·
	// �Զ��忽�����캯�� ����жѳ�Ա������������
	Student(const Student & stu) {
		// stu �ɵ�ַ

		// this �µ�ַ

		// s2 = �µ�ַ

		cout << "�������캯�� &stu:" << (int)&stu << " this:" << (int)this << endl;

		// ��ǳ���������µ�ַname  �ɵ�ַname ָ��ͬһ���ռ䣬����ɣ��ظ�free�����⣬��������
		// �µ�ַname = �ɵ�ַ ��ǳ������
		// this->name = stu.name;

		// �������
		this->name = (char *)malloc(sizeof(char *)* 10);
		strcpy(this->name, name);

		this->age = stu.age;

		cout << "�������캯��2 this->name:" << ((int) this->name) << "  stu.name:" << (int)stu.name << endl;

		// ��� �����  ԭ��ȫ����ͨ��ʱ��
	} // �˿������캯��ִ���� �ɻ����һ�� this==�µ�ַ  �� main������ stu


	// Ĭ�ϵĿ������캯�� ��ǳ����
};

void showStudent(Student stu) {
	cout << "showStudent������" << (int)&stu << "  " << stu.name << "," << stu.age<< endl;
}

int main() {
	Student stu("����", 31);

	showStudent(stu); // ��ջ�� �µ�ַname�ͷ�һ��
	// showStudent(stu); // ��ջ�� �µ�ַname�ͷ�һ��
	// �����ͷ��µ�ַname �ᱼ��

	// �ͷ�һ���µ�ַname  ���ͷ�һ�ξ�nameҲ����

	showStudent(stu);


	showStudent(stu);


	showStudent(stu);


	showStudent(stu);

	getchar();
    return 0;
} // main������ջ stu �ɵ�ַ


// רҵ���ܣ�1.�о���C++�������ԭ��