// 2.stackջѧϰ�� �Ƚ����������ȳ�����ǹ�ӵ����ŵ�һ��˼·��

#include <iostream>
#include <stack>
using namespace std;

// NDK������ �����ò���

int main() {
    stack<int> stackVar;

    // ѹջ��ע�⣺stack�޷�ָ���Ǹ�λ��ȥѹջ��
    stackVar.push(30);
    stackVar.push(60);
    stackVar.push(90);

    // �����Ǹ�Ԫ�أ��������棨��ͼ��

    // [] �Ǳ��ǲ��еģ��ڲ�û�����ش������
    /*for (int i = 0; i < stackVar.size(); ++i) {
        // cout << stackVar[i] << endl;
        // cout << stackVar.at() << endl;
    }*/

    // ��������û�е�����
    // ������ �Լ���װ ������ ����
    /*for (stack<int>::iterator; i < ; ++i) {

    }*/

    // ���ã�Ϊʲô�� Ԫ�ر�������
    // ���ַ�ʽ�ǿ��Եģ���ǹ���ӵ�ȫ�����꡾���Ԫ����ա�
    while (!stackVar.empty()) {
        int top = stackVar.top(); // top == ��ȡջ����Ԫ��
        cout << "��ȡջ����Ԫ�أ�" << top << endl; // ��Զ�� 90

        stackVar.pop(); // ��ջ����Ԫ�� ����ȥ  ��ɾ����
    }

    /*int top = stackVar.top();
    cout << top << endl;*/

    return 0;
}


