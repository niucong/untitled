#include <iostream>

using namespace std;

// JNI Ϊʲôһ��Ҫ���������������ר�ţ�

#ifndef PIG_H // ����û������꣨Java ��==������
#define PIG_H // ���������

class Pig {
private:
    int age;
    char * name;

public:
    // ��̬��Ա����
    static int id;

    // ���캯��������ϵ��
    Pig();
    Pig(char *);
    Pig(char *,int);

    // ��������
    ~Pig();

    // �������캯��
    Pig(const Pig & pig);

    // ��ͨ���� set get
    int getAge();
    char * getName();
    void setAge(int);
    void setName(char *);

    void showPigInfo() const; // ����ָ�볣�� ֻ��

    // ��̬����������
    static void changeTag(int age);

    // ��Ҫ������
    // void changeTag(int age);

    // ��Ԫ����������
    friend void changeAge(Pig * pig, int age);
};

#endif // �ر�/��β
