//
// Created by Niucong on 2021/3/8.
//

// �Ͻڿ���ҵ

#include <stdio.h>

// ö���ڴ�����ʱ���Ѿ�ȡ������
typedef enum {
    AUDIO = 111,
    VIDEO,
    INFO
} AV;

int main() {
    printf("��ȭ��");

    // �Ժ�дC�����ϰ�ߣ��������ϱ���������֤����� ͳһ
    AV av1 = AUDIO;
    AV av2 = VIDEO;
    AV av3 = INFO;
    printf("audio:%d, video:%d, info:%d,\n", av1, av2, av3);
    // ��ȭ��audio:111, video:112, info:113,

    return 0;
}

