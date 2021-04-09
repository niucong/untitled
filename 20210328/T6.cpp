// 6.set����  ����������ν�ʡ�

// set���ڲ���������ṹ����������������ݽ������򣬵��Ǿ��Բ�����Ԫ����ͬ

#include <iostream>
#include <set>

using namespace std;


int main() {
    set<int, less<int>> setVar; //  __x < __y ��С����Ĭ������� ���� less

    // ��Ӳ���������Ҫ�õ�������Ҳ����Ҫָ��λ��
    setVar.insert(1);
    setVar.insert(3);
    setVar.insert(2);
    setVar.insert(4);

    // �ظ����룬�����ᱨ��  std::pair<iterator, bool>
    pair<set<int, less<int>>::iterator, bool> res = setVar.insert(8);

    // res.first ��ȡ��һ��Ԫ�� ������   ��ǰ������   ���һ��λ��
    // res.second ��ȡ�ڶ���Ԫ�� bool
    bool insert_success = res.second;
    if (insert_success) {
        cout << "��ϲ�㣬����ɹ�" << endl;

        // ����ɹ������õ�һ��Ԫ�ر���
        for (; res.first != setVar.end(); res.first ++) {
            cout << *res.first << endl;
        }

    } else {
        cout << "��������ʧ��.." << endl;
    }

    // ȫ������  auto �Զ��Ƶ�
    for (auto it = setVar.begin(); it != setVar.end() ; it ++) {
        cout << "ȫ��������" << *it << endl;
    }

    return 0;
}

