// �꺯�� ��ʵ�����У��꺯�����Ǵ�д
#include <iostream>
using namespace std;

#define SHOW(V) cout << V << endl; // �����б� ��������  ����ֵ ������
#define ADD(n1, n2) n1 + n2
#define CHE(n1, n2) n1 * n2 // ������������ ���꺯����ע������

// ���ӵĺ꺯��
#define LOGIN(V) if(V==1) {                         \
    cout << "���� ������������:" << V << endl;        \
} else {                                             \
    cout << "������ ������������:" << V << endl;       \
} // ����ǽ�β������Ҫ�� \

void show() {}

int main() {
    SHOW(8);
    SHOW(8.8f);
    SHOW(8.99);

    int r = ADD(1, 2);
    cout << r << endl;

    r = ADD(1+1, 2+2);
    cout << r << endl;

     r = CHE(1+1, 2+2);
//    r = 1+1 * 2+2; // �ı��滻��1+1 * 2+2  ����˷�  ���յ��� 5
    cout << r << endl; // ������Ϊ����8��   ���Ǵ�ӡ5

    LOGIN(0);
    LOGIN(0);
    LOGIN(0);
    LOGIN(0);
    LOGIN(0);
    LOGIN(0);
    // �ᵼ�´����������

    show();
    show();
    show();
    show();
    show();
    // ��ͨ������ÿ�ζ����ջ ��ջ �����ᵼ�´����������

    return 0;
}

// �꺯��
/*
 * �ŵ㣺
 *   1.�ı��滻��������ɺ����ĵ��ÿ���(����ջ�ռ䣬�β�ѹջ��������ջ�ͷ� ..)
 *
 * ȱ�㣺
 *   1.�ᵼ�´����������
 *
 */

