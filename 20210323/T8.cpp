// 8.ģ�溯����Java�淺�ͣ���  C++û�з��� C++��ģ�庯�� �ǳ������� Java�ķ���

#include <iostream>

using namespace std;

// �ӷֺϼ�  int double float ... �㶼Ҫ���ǣ����ǲ���Ҫ����ܶ�� ����
/*void addAction(int n1, int n2) {
    cout << "addAction(int n1, int n2):" << n1 + n1 << endl;
}

void addAction(float n1, float n2) {
    cout << "addAction(int n1, int n2):" << n1 + n1 << endl;
}

void addAction(double n1, double n2) {
    cout << "addAction(int n1, int n2):" << n1 + n1 << endl;
}*/

// ģ�庯��  == Java�ķ��ͽ��������
template <typename TT>
void addAction(TT n1, TT n2) {
    cout << "ģ�庯����" << n1 + n2 << endl;
}

int main() {
    addAction(1, 2);
    addAction(10.2f, 20.3f);
    addAction(545.34, 324.3);
    addAction<string>("AAA", "BBB");
    addAction<char>('A', '1');// 'A'��ASCIIֵ

    /*addAction(2, 324.3);
    addAction(54, 324.3f);*/
    return 0;
}
