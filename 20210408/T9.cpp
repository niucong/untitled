// 3.��������ת���� dynamic �ַ����̬ ������ ת��

//const_cast	ȥ�����͵�const��volatile����
//static_cast	������ת������̬����ת��
//dynamic_cast	������ת������̬����ת��������ʱ������Ͱ�ȫ��ת��ʧ�ܷ���NULL��
//reinterpret_cast	�����½������ͣ���û�н��ж����Ƶ�ת��

#include <iostream>
using namespace std;

class FuClass {
public:
    // ��̬ת�������ø����Ϊ�麯��
    virtual void show() {
        cout << "fu show" << endl;
    }
};

class ZiClass  : public FuClass {
public:
    void show() {
        cout << "zi show" << endl;
    }
};

int main() {
    // ��̬����ת����ʱ���������� ����fuClass ��new ����ģ��ѳɶ��֣��Ͳ���ת������
    // FuClass * fuClass = new FuClass(); // ʧ��

    FuClass * fuClass = new ZiClass; // �ѳɶ��� ������
    ZiClass * ziClass = dynamic_cast<ZiClass *>(fuClass);

    // TODO ����ת���಻�еģ�ͬѧ���Լ�ȥ��һ��

    // ��̬ת�����з���ֵ�� null ת��ʧ��
    if (ziClass) { // ziClass != null
        cout << "��ϲ��ת���ɹ� " ;
        ziClass->show();
    } else {
        cout << "����ϲ ת��ʧ��" << endl ;
    }



    return 0;
}

