// 2.��̳У������ԡ�  �ڿ��������У���׼���֣�������֣�Ҫ֪����ô����

#include <iostream>
using namespace std; // �Ѿ�������

// �⸸��
class Object {
public: string info;
};

// ����1/����2
class Base1 : virtual public Object {};
class Base2 : virtual public Object {};

// ����
class Main1 : public Base1, public Base2 {};

int main() {
    Object object; // ��ջ�����٣��ͻ���һ��thisָ�룬����ָ����1000H������ָ�������
    Base1 base1; // ��ջ�����٣��ͻ���һ��thisָ�룬����ָ����2000H������ָ�������
    Base2 base2; // ��ջ�����٣��ͻ���һ��thisָ�룬����ָ����300H������ָ�������
    Main1 main1; // ��ջ�����٣��ͻ���һ��thisָ�룬����ָ����4000H������ָ�������

    object.info = "A";
    base1.info = "B";
    base2.info = "C";
    main1.info = "D";

    cout << object.info << endl;
    cout << base1.info << endl;
    cout << base2.info << endl;
    cout << main1.info << endl;


    exit(0);
}