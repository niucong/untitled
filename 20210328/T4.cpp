// 4.���ȼ�����ѧϰ (queue �� �Ӽ�)��

#include <iostream>
#include <queue>

using namespace std;

// priority_queue �ڲ�������ǰ���vector ��һ���ķ�װ

// Deque �� queue  ��ʲô����   ˫�˶���

int main() {
    // ���ȼ����У�Ĭ������ �Ӵ��С 60 50 40 ...
    // priority_queue<int> priorityQueue;

    // ��ʽ���룺 vector<int>, less<int>  �㿴����
    // priority_queue<int, vector<int>, less<int>> priorityQueue;

    // less  // less<int> return __x < __y;  ��һ��Ԫ�غ͵�ǰԪ�� �Ƚϣ�����ture false  �Ӵ�С

    // less return __x < __y;  // �Ӵ�С
    // greater return __x > __y; // ��С����

    // �ڶ������������ڲ���Ҫvector����͸���

    priority_queue<int ,vector<int>, less<int>> priorityQueue;
//     priority_queue<int ,vector<int>, greater<int>> priorityQueue;
//    priority_queue<int> priorityQueue;

    priorityQueue.push(10);
    priorityQueue.push(20);
    priorityQueue.push(50);
    priorityQueue.push(40);
    priorityQueue.push(60);
    priorityQueue.push(30);

    cout << priorityQueue.top() << endl; // 60

    // ѭ������
    while (!priorityQueue.empty()) {
        cout << "priorityQueue:" << priorityQueue.top() << endl; // һֱ��60
        priorityQueue.pop(); // ��ǰ���Ԫ�����ѵ�
    }

    priority_queue<string> priorityQueue1;
    priorityQueue1.push("blue");
    priorityQueue1.push("���");
    priorityQueue1.push("135");
    priorityQueue1.push("Hello");
    priorityQueue1.push("cat");
    cout << priorityQueue1.top() << endl;
    // ѭ������
    while (!priorityQueue1.empty()) {
        cout << "priorityQueue1:" << priorityQueue1.top() << endl; // һֱ��60
        priorityQueue1.pop(); // ��ǰ���Ԫ�����ѵ�
    }

    return 0;
}

