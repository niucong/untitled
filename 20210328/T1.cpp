// Java�ļ��Ͽ�� �ǳ�ǿ��  �൱��  C++  STL����׼ģ��⣩ #include <iostream>

// TODO STL �ǡ�Standard Template Library������д��������Ϊ����׼ģ��⡱��STL �� C++ ��׼���һ���֣����õ�����װ��

// STL �кܶ�ܶ������
// C++ STL ���˼· �� Java��ͬ

// C ++ vector ���� ���� ���ڲ�����װ��̬��С������Ϊ�������ܹ��������Ķ�̬���顾���ݽṹ����

#include <iostream>

#include <vector> // ���� vector ������֧��

// NDK ���� һ��Ҫ������  Ӧ�� queue ����

using namespace std;

int main() {
    std::cout << "��׼ģ���" << std::endl;

    vector<int> vector1;

    vector<int> vector2(10); // ָ��10�Ŀռ��С

    vector<int> vector3(10, 0); // ����10��ֵ�� ÿ��ֵ����0

    vector<int> vector4;

    // vector4.begin() ������ ���뵽ǰ��
    // vector4.end() ������ ���뵽����

    // ��������
    vector4.insert(vector4.begin(), 40);
    vector4.insert(vector4.begin(), 60);
    vector4.insert(vector4.begin(), 80);
    vector4.insert(vector4.begin(), 100);
    vector4.insert(vector4.begin(), 200);

    // ��һ��
    cout << " �޸�ǰ��vector4.front():" << vector4.front() << endl;
    vector4.front() = 99; // Ĭ���޸ĵ�һ��
    cout << " �޸ĺ�vector4.front():" << vector4.front() << endl;

    // ���һ��
    cout << " �޸�ǰ��vector4.back():" << vector4.back() << endl;
    vector4.back() = 777; // Ĭ���޸����
    cout << " �޸ĺ�vector4.back():" << vector4.back() << endl;

    vector4.erase(vector4.begin()); // �Ƴ���һ��Ԫ�أ��ڲ���ͨ����������λ�� �����Ƴ���  ɾ��

    // ѭ����ӡ��Ĭ�� �Ӵ�С���
    for (int i = 0; i < vector4.size(); ++i) {
        cout << "item:" << vector4[i] << endl;
    }

    // KT�������Ƶ�  �൱�� C++ auto
    /*var a = 10;
    var b = 30.4f;
    var c = "";*/

    // ������ ѭ������
    // auto Kotlin�Դ������Ƶ�
    // for (vector<int>::iterator iteratorVar = vector4.begin(); iteratorVar != vector4.end(); iteratorVar++) {
    for (auto iteratorVar = vector4.begin(); iteratorVar != vector4.end(); iteratorVar++) {
        // ������ ����ָ�����  iteratorVar++
        cout << "��������" << *iteratorVar << endl;
    }

    cout << "" << endl;

    return 0;
}
