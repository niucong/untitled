// �����ռ�

#include <iostream>

// ����std�����ǵ�main�����Ϳ���ֱ��ʹ������ĳ�Ա������Ҫʹ�� std::
using namespace std; // C++�Լ��������ռ� (C# .net �����ռ�)

// �Զ��������ռ�
namespace derry1 {
    int age = 33;
    char * name = "Derry����1";

    void show() {
        cout << "name:" << name << ", age:" << age << endl;
    }

    void action() {
        cout << "derry1 action" << endl;
    }
}

// TODO ------ �����ռ������ظ��ĺ���
// �Զ��������ռ�
namespace derry2 {
    void action() {
        cout << "derry2 action" << endl;
    }
}

// TODO ------ С���ʻ�����������������ռ��Ƕ��
// �Զ��������ռ�
namespace derry3 {
    namespace derry3Inner {
        namespace derry3Inner1 {
            namespace derry3Inner2 {
                namespace derry3Inner3 {
                    void out() {
                        cout << "������������ݣ����������˼�į" << endl;
                    }
                }
            }
        }
    }
}

// ��������д�� �����ռ�
// using namespace derry1;

int main() {
    cout << "�����ռ�" << endl;

    // ��������д�� �����ռ�
    using namespace derry1;

    int ageValue = derry1::age; // ��ʽ1 ʹ�� �ո������������ռ�
    derry1::show(); // ʹ�� �ո������������ռ�

    ageValue = age; // ��ʽ2 ֱ��ȥ������ ::
    show(); // ֱ��ȥ������ ::


    // TODO ------ �����ռ������ظ��ĺ���
    using namespace derry2;
    // action(); ������
    derry1::action();
    derry2::action();

    // TODO ------ С���ʻ�����������������ռ��Ƕ��

    // ��һ�ַ�ʽ �����������ռ�  ��ʹ��
    using namespace derry3::derry3Inner::derry3Inner1::derry3Inner2::derry3Inner3;
    // ��ʹ��
    out();

    // �ڶ��ַ�ʽ ֱ��ʹ��
    derry3::derry3Inner::derry3Inner1::derry3Inner2::derry3Inner3::out();

    return 0;
}

