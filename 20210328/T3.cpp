// 3.queue����ѧϰ�������ʹ�ã���

#include <iostream>
#include <queue> // ����֧�֣��ڲ��������� ���� �� ���� ��

// ���� + ���ݽṹ

// ����Ƶ�� ѹ����ʽ��Ƶ���ݣ�push�� ����       pop������ǰ��� ��Ƶ��ʽ���� ��ȡ

using namespace std;

int main() {
    queue<int> queueVar;

    queueVar.push(20);
    queueVar.push(40);
    queueVar.push(60);

    // ��һ��Ԫ����˭ 20  FIFO ԭ��
    cout << " �޸�ǰ�� queueVar.front():" << queueVar.front() << endl;
    queueVar.front() = 88;
    cout << " �޸ĺ� queueVar.front():" << queueVar.front() << endl;

    // ���һ��
    cout << " �޸�ǰ�� queueVar.back():" << queueVar.back() << endl;
    queueVar.back() = 99;
    cout << " �޸ĺ� queueVar.back():" << queueVar.back() << endl;

    // û���ҵ� �Ǳ�
    /*for (int i = 0; i < 9; ++i) {
        queueVar[i];
    }*/

    // ��������û�е�����
    /*for (queue<int>::iterator; i < ; ++i) {

    }*/

    // ���ã�Ϊʲô�� ǰ���Ԫ��ȫ������������
    while (!queueVar.empty()) {
        cout << "while1:" << queueVar.front() << endl;

        queueVar.pop(); // ��ǰ���Ԫ�� �����ѵ�  ��ɾ����
    }

    while (!queueVar.empty()) {
        cout << "while2:" << queueVar.front() << endl;

        queueVar.pop(); // ��ǰ���Ԫ�� �����ѵ�  ��ɾ����
    }

    return 0;
}
