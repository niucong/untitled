//#define _CRT_SECURE_NO_WARNINGS // strcpy���лᱨ��֧��

#include<iostream>
#include<string.h>
using namespace std;

class Student1
{
public:

	int age;
	char * name;

	Student1() { cout << "�ղ������캯��" << endl; }

	Student1(char * name) :Student1(name, 99) { cout << "һ���������캯��" << endl; }

	Student1(char * name, int age) {
		cout << "�����������캯��" << endl;

		this->name = (char *)malloc(sizeof(char *)* 10);
		strcpy(this->name, name);

		this->age = age;
	}

	~Student1() {
		cout << "��������ִ��" << endl;

		free(this->name);
		this->name = NULL;
	}

	// Ĭ����һ���������캯�� ��ʿ�� ���ǿ�����
	// Student(const Student & stu) {
	// stu �ɵ�ַ

	// this �µ�ַ

	// s2 = �µ�ַ
	// }
};

 main() {
	// �� ������� ��ͼ��
	// Student s1;
	// Student s2;
	// cout << &s1 << endl;
	// cout << &s2 << endl;
	// ������ַ ��ȫ��ͬ
	// ��ӡ��
	// �ղ������캯��
	// �ղ������캯��
	// 1000H
	// 2000H


	// �� ������� 
	Student1 s1;
	Student1 s2 = s1;

	// ������ַ ��ȫ��ͬ
	// ��ӡ��
	// �ղ������캯��
	// 1000H
	// 2000H

	cout << &s1 << endl;
	cout << &s2 << endl;

	getchar(); // ��Ҫһ���������ó���ͣ��int
	return 0;
}