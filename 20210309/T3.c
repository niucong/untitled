#include <stdio.h>

// C���Եĳ�������ʵ�Ǹ� �ٳ�����α���⣩
int main() {
    const int number = 100;

//     number = 200;

    int * numP = &number;

    *numP = 10000;

    printf("%d\n", number);

    return 0;
}