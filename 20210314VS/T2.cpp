#define _CRT_SECURE_NO_WARNINGS // strcpy���лᱨ��֧��

#include<iostream>
#include<string.h>
using namespace std;

class Student2
{
public:

	int age;
	char * name;

	Student2() { cout << "�ղ������캯��" << endl; }

	Student2(char * name) :Student2(name, 99) {
		cout << "һ���������캯�� this:" << this << endl;
	}

	Student2(char * name, int age) {
		cout << "�����������캯�� this:" << this << endl;

		this->name = (char *)malloc(sizeof(char *)* 10);
		strcpy(this->name, name);

		this->age = age;
	}

	~Student2() {
		cout << "��������ִ�� &this->name:" << &this->name << endl;

		free(this->name);
		this->name = NULL;
	}

	// Ĭ����һ���������캯�� ��ʿ�� ���ǿ�����
	// һ����д�˿������캯����Ĭ�ϵĻ����� Java�Ĺ��캯��һ��˼·
	Student2(const Student2 & stu) {
		// stu �ɵ�ַ

		// this �µ�ַ

		// s2 = �µ�ַ

		cout << "�������캯�� &stu:" << &stu << " this:" << this << endl;


		// �µ�ַname = �ɵ�ַ ��ǳ������
		this->name = stu.name;


		// ��� �����  ԭ��ȫ����ͨ��ʱ��
	} // �˿������캯��ִ���� �ɻ����һ�� this==�µ�ַ  �� main������ stu
};

Student2 getStudent(char * name) {
	Student2 st(name); // �ɵ�ַ

	cout << "getStudent����:" << &st << endl; // �ɵ�ַ

	return st; // stu �ɵ�ַ
} // ��ջ �ͷ� ջ��Ա stu

int main() {
	// = ��ִ�п������캯��
	// stu �µ�ַ
	Student2 stu = getStudent("��ȭ��");

	cout << "main����:" << &stu << endl;

	// ��ӡ��
	// �����������캯��
	// һ���������캯��
	// getStudent����: 1000H��ַ
	// �������캯�� �����µ�ַ ���µ�ַ �� main������ stu == �µ�ַ
	// ��������
	// main����: 

	// getchar(); // ��Ҫһ���������ó���ͣ��
    return 0;
} // main������ջ stu �µ�ַ ��������ִ��

// ����һ�� main������ջ stu �µ�ַ ��������ִ�� ����� �ظ��ͷſռ������   ���
// ���ʶ� xx