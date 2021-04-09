#ifndef CPPCLIONPROJECT_CUSTOMPTR_H
#define CPPCLIONPROJECT_CUSTOMPTR_H

#pragma once
#include <iostream>
#include <memory> // ����ָ���
using namespace std;

template<typename T>
class Ptr {
private:
    T * object; // ��������ָ��ָ�����Ķ���  Person Student
    int * count; // ���ü���

public:
    Ptr() {
        count = new int (1); // new �Ķ��� ���� *ָ��   ��newֻ��Ϊ�˺���������㡿
        object = 0; // ��Ϊ��û�и�������ѽ���˼�Ҳû�ж���ѽ��û�취
    }

    // t = Person Student
    Ptr(T * t) :object(t) {
        // ֻ������������ô���ü���Ϊ1������Ǻܺ����
        count = new int (1);
    }

    // ��������
    ~Ptr() {
        // ���ü�����1��Ϊ0��ʶ�����ͷ�object��
        if (--(*count) ==0) {
            if (object) {
                delete object;
            }
            // ����
            delete count;
            object = 0;
            count = 0;
        }
    }

    // �������캯��
    Ptr(const Ptr<T> & p) {
        cout << "�������캯��" << endl;

        // sharedPtr1 == p �����ü��� +1  = 2
        ++(*p.count);

        object = p.object;
        count = p.count; // �����ǲ��� p.count==2 �� count==2
    }

    // �Զ��� =�����������
    Ptr<T> & operator = (const Ptr<T> & p) {
        cout << "=�����������" << endl;

        ++(*p.count);

        // �����ǳ���  ����  ������û�й�ϵ������ר�Ž��� (��ϴ���)
        if (--(*count) == 0) {
            if (object) {
                cout << "����object" << endl;
                delete object;
            }
            cout << "����count" << endl;
            delete count;
        }

        object = p.object;
        count = p.count;
        return *this; // ��������صķ���
    }

    // �������ü�������ֵ
    int use_count() {
        return *this->count;
    }
};


#endif //CPPCLIONPROJECT_CUSTOMPTR_H
