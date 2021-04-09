// 1.���캯���꽲�� 2.����������  3.Java/KT����ν������������
#include <iostream>
#include <string.h>
using namespace std;

class Student {

// ���캯��
public:
    // �ղ������캯��
    Student() {
        cout << "�ղ������캯��" << endl;
    }

    // һ�������Ĺ��캯��
    // :Student(name, 87) �ȼ� 1.�������������Ĺ��캯���� 2.�ٵ��õ�ǰ����
    // ѧ��˵�ģ��ȵ������������ģ��ٵ���һ����
    Student(char *name) :Student(name, 87) {
        cout << "һ�������Ĺ��캯��" << endl;
        this->name = name;
    }
    // ϵͳԴ������д��
    // :name(name) �ȼ� this->name = name;
    /*Student(char * name) :name(name) {
        cout << "һ�������Ĺ��캯��" << endl;
    }*/

    // ���������Ĺ��캯��
    Student(char *name, int age) {
        // this->name = name;

        // ����
        this->name = (char *) (malloc(sizeof(char *) * 10));
        strcpy(this->name, name);

        this->age = age;
        cout << "���������Ĺ��캯��" << endl;
    }

    // �������� Student����ģ��������ԣ�Student���󱻻����ˣ�����һЩ�ͷŹ���
    // delete stu ��ʱ�����ǵ���������һ��ִ��
    // free����ִ������������Ҳ��ζ�ţ���û���������������棬���ͷŹ����� mallocҲ������ù��캯��
    ~Student() {
        cout << "��������" << endl;

        // �����ͷ� �������ٵĳ�Ա
        if (this->name) {
            free(this->name);
            this->name = NULL; // ִ��NULL�ĵ�ַ�������������ָ��
        }
    }

// ˽������
private:
    char *name;
    int age;

// ������ set get ����
public:
    int getAge() {
        return this->age;
    }

    char *getName() {
        return this->name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setName(char *name) {
        this->name = name;
    }
};

int main() {
    // TODO  =========== ������ջ�� ���ٿռ��

    /*Student stu; // ���� �ղ������캯��
    stu.setAge(34);
    stu.setName("��Ԫ��");
    cout << "name:" << stu.getName() << ", age:" << stu.getAge() <<  endl;*/

    // Student stu("�۰�", 30);
    /*Student stu("������");
    cout << "name:" << stu.getName() << ", age:" << stu.getAge() <<  endl;*/

    // TODO =========== �����Ƕ��� ���ٿռ��  ���������ֶ��ͷţ������ڴ�ռ��Խ��

    // ϵͳԴ���У��ῴ�����ܶ�ʹ�� new �ؼ���

    // *stu  ->������һ��ָ��ĳ�Ա
    // new/delete
    // C++�У�����ʹ�� new/delete һ��
    Student *stu = new Student("������", 26);
    cout << "name:" << stu->getName() << ", age:" << stu->getAge() <<  endl;
    delete stu;

    // free(stu); ����д�ǲ��淶�ģ������˼ҹ�����

    // ����������д (C����ʦ���������꣬�Ĳ����Լ���ϰ�ߣ� malloc)
    // malloc ��Ĺ��캯����û�е��ã�������е�
    /*Student *stu2 = (Student*) malloc(sizeof(Student));
    free(stu2);*/

    // ���᣺C++�������������������� �ͷŹ�����    Java KT �������� ��ʲô��

    return 0;
}
