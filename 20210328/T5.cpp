// 5.list��ѧϰ�� Java��ArrayList����Object[]���飬   C++��list �ڲ�����������

#include <iostream>
#include <list> // list������֧��
using namespace std;

// NDK �������ò��� list

int main() {
    list<int> listVar;

    // �������
    listVar.push_front(50); // ���뵽ǰ��   ��ȷ 50
    listVar.push_back(60); // ���뵽���� 50 60
    listVar.insert(listVar.begin(), 70); // ���뵽ǰ��  ��� 70 50 60
    listVar.insert(listVar.end(), 80); // ���뵽���� 70 50 60 80

    // �޸Ĳ���
    listVar.back() = 88;// 70 50 60 88
    listVar.front() = 55;// 55 50 60 88

    // ɾ��
//    listVar.erase(listVar.begin()); // ɾ����ǰ��� 55
//    listVar.erase(listVar.end()); // ɾ�������� 88

    // list ������
    // ����ͨ���Ǳ�ȥ���ʣ�Ҳ�����޸�   ����
    for (list<int>::iterator it = listVar.begin(); it != listVar.end() ; it ++) {
        cout << *it << endl;
    }

    return 0;
}

