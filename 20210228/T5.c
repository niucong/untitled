#include <stdio.h>
#include <stdlib.h>

// ��̬���ٵ�ʹ�õĳ���
int main() {
    // ��̬���ٵ��ڴ�ռ��С���ǲ����޸ĵģ��������Ҫ��̬�޸Ŀռ��С����Ȼʹ�� ջ�� ������ʹ�� ��̬���ٵģ����ʵ������Ҫ��̬�ı䣬��ʹ�����桿
    // int arr [6];


    // ===================================  ������ ��̬���ڴ��ʹ�ó���

    // ���ٵĿռ� ��Ҫ�仯�� ��̬����

    int num;
    printf("���������ĸ�����");

    // ��ȡ�û������ֵ
    scanf("%d", &num);

    // ��̬���� �û������ֵ �ռ�Ĵ�С   ��������
    int * arr = malloc(sizeof(int) * num);
    // int arr2 []   ==   int * arr  һ������

    int print_num;
    // ѭ������
    for (int i = 0; i < num; ++i) {
        printf("�������%d����ֵ:", i);

        // ��ȡ�û������ֵ
        scanf("%d", &print_num);

        arr[i] = print_num;
        printf("ÿ��Ԫ�ص�ֵ:%d, ÿ��Ԫ�صĵ�ַ:%p\n", *(arr + i), arr + i);
    }

    // for ѭ����ӡ
    for (int i = 0; i < num; ++i) {
        printf("���Ԫ�ؽ����:%d\n", arr[i]); // arr[i] ��ʿ �ȼ��� * (arr + i)
    }

    free(arr);

//    getchar();

    return 0;
}
