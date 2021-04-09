// ν�� ��ƶ��������

#include <iostream>
#include <set>

using namespace std;

// set���ڲ���������ṹ������������������Զ��������򣬵��Ǿ��Բ�����Ԫ����ͬ

class Person {
public:
    string name;
    int id;

    Person(string name, int id) : name(name), id(id) {}
};

// C++ ����һЩ����� ν��  �������㹦�ܣ� ģ��C++Դ���ν�� �Զ���ν�� ����������

// C++������д�����Դ�� û�ж���ȽϵĹ��� ��ϵͳԴ��ν�� ����������ȽϹ��ܡ�
// bool operator()(const _Tp& __x, const _Tp& __y) const { return __x < __y; }

// ���Ǿ��Զ����������  ���Զ���ν�� û�дﵽν�ʵı�׼��
bool doCompareAction(const Person &person1, const Person &person2) {
    return person1.id < person2.id;
};

// ������ν��
struct doCompareAction2 {
public:
    bool operator()(const Person &__x, const Person &__y) {
        return __x.name < __y.name;
    }
};

struct doCompareAction3 {
public:
    bool operator()(const Person &__x, const Person &__y) {
        return __x.id > __y.id;
    }
};

int main() {
    // Ĭ���� less  return ����1 < ����2;
//    set<Person, doCompareAction> setVar;
    set<Person, doCompareAction2> setVar;
//    set<Person, doCompareAction3> setVar;

    // ��������
    Person p1("Snake", 1);
    Person p2("Kevin", 2);
    Person p3("Derry", 3);
    Person p4("Tina", 0);

    // �ѹ����Ķ��� ���뵽 set ��������ȥ
    setVar.insert(p1);
    setVar.insert(p2);
    setVar.insert(p3);
    setVar.insert(p4);

    // name string  ---  c_str() ---->   char *
    for (set<Person>::iterator it = setVar.begin(); it != setVar.end(); it++) {
        cout << it->name.c_str() << " , " << it->id << endl;
    }

    return 0;
}

