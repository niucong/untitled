// 3.��������ת���� reinterpret_cast ǿ��ת�� �� static_castҪǿ�� static_cast�ܹ��������飬
// reinterpret_castǿ��ת�������ԣ�ͬʱ���Ҹ��� �¹���

//const_cast	ȥ�����͵�const��volatile����
//static_cast	������ת������̬����ת��
//dynamic_cast	������ת������̬����ת��������ʱ������Ͱ�ȫ��ת��ʧ�ܷ���NULL��
//reinterpret_cast	�����½������ͣ���û�н��ж����Ƶ�ת��

#pragma once
#include <iostream>
#include <iostream>
#include <iostream>
#include <iostream>
#include <iostream>
#include <iostream>

using namespace std;

class DerryPlayer {
public:
    void show() {
        cout << "DerryPlayer" << endl;
    }
};

int main() {
    DerryPlayer * derryPlayer = new DerryPlayer();
    long playerValue = reinterpret_cast<long>(derryPlayer); // �Ѷ�������ֵ

    // ͨ����ֵ ��ɶ���
    DerryPlayer * derryPlayer2 = reinterpret_cast<DerryPlayer *>(playerValue);
    derryPlayer2->show();

    printf("derryPlayer:%p\n", derryPlayer);
    printf("derryPlayer2:%p\n", derryPlayer2);

    // ǰ���ֻ�ǣ�Ϊʲô��һ������Ϊָ���ŵ�ַ��ͬʱָ�����Լ��ĵ�ַ�������ӡ���Լ��ĵĵ�ַ����һ����
    printf("derryPlayer:%p\n", &derryPlayer);
    printf("derryPlayer2:%p\n", &derryPlayer2);

}