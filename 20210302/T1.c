#include <stdio.h>

// ��������һ�ͼ(�´λ�ͼ)
int main() {

    // ����
    int arrInt[] = {6,4,8,3,1,2,9,7,0,5};

    // *(arrInt+4))  �����0Ԫ�� + 4   1�ĵ�ַ *��ֵ==1   TODO OK
    // arrInt + ǰ��  ��  �����0Ԫ�� + 1

    int result = arrInt[*(arrInt+*(arrInt+4))];

    printf("result��ֵ�Ƕ���ѽ:%d\n", result);

    return 0;

}

