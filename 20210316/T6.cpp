// 4.const���κ�����this������ڡ�

#include <iostream>

using namespace std;

// ���������C++��λ���ᱻ�ص�����Ȼ�ʲ���

class Worker {
public:
    char * name;
    int age = NULL; // C++�в���Java��Java��Ĭ��ֵ�� ����㲻��Ĭ��ֵ����ô����ϵͳֵ -64664

    // int * const  ָ�볣�� ָ�볣������ַ��Ӧ��ֵ�ܸģ���ַ�������޸ġ�
    // const int *  ����ָ�� ����ָ�롾��ַ�����޸ģ���ַ��Ӧ��ֵ���ܸġ�

    // ���᣺ԭ��Ϊʲô�����޸�age
    // Ĭ�ϳ�����ʿ��this������ * const this��
    // ���� * const ָ�볣��������ָ���ַ���ܱ��޸ģ�����ָ���ַ��ֵ�ǿ����޸ĵ�
    void change1() {
        // ����ָ���ַ���ܱ��޸�
        // this = 0x6546;  // ���벻ͨ������ַ���ܱ��޸ģ���Ϊ��ָ�볣��
        // ��ַ�������޸�
        // this = 0x43563;

        // ��ʿ��this
        // ����ָ���ַ��ֵ�ǿ����޸ĵ�
        // ��ַ��Ӧ��ֵ�ܸ�
        this->age = 100;
        this->name = "JJJ";
    }

    // Ĭ�����ڣ�this �ȼ��� const Student * const  ����ָ�볣������ַ���ܸģ���ַ��Ӧ��ֵ���ܸģ�
    void changeAction() const {
        // ��ַ���ܸ�
        // this = 0x43563;

        // ��ַ��Ӧ��ֵ���ܸ�
        // this->age = 100;
    }

    // ԭ���޸���ʿ����  const ���� * const ����ָ�볣��
    void showInfo() const {
        // this->name = "";
        // this->age = 88;

        // ֻ����
        cout << "age:" << age << endl;
    }
};

int main() {
    return 0;
}
