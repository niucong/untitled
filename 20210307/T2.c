//
// Created by Niucong on 2021/3/8.
//

// ��Ϸ������

// C���ԣ���ַ����Ҫ��

#include <stdio.h>
#include <windows.h>

int main() {
    printf("��Ϸ����ʱ��ʼ��....\n");

    // Linux�Ͳ��淶
    int i;
    for (i = 100; i > 0; i--) {
        printf("��ʣ�¶�����:%d, �ڴ��ַ��:%p\n", i, &i);
        Sleep(1000);
    }

    printf("��ϲ�����Ѿ�Ӯ������Ϸ��ߵȼ����ﱤ��!\n");

    getchar(); // ͣ��

    // ���ѵ��ǵ�ַ��Ѱ�ң�ֻҪ�����ҵ���ַ���Ͳ���һ��

    return 0;
}

