#include <stdio.h>
#include <stdlib.h>

// ��̬����֮realloc
int mainT0() {

    int num;
    printf("���������");
    // ��ȡ�û������ֵ
    scanf("%d", &num);

    // 5��ֵ
    int * arr = (int *) malloc(sizeof(int) * num);
    for (int i = 0; i < num; ++i) {
        arr[i] = (i + 10001); // arr[i]���ڲ���ʿ == *(arr+i)
    }
    printf("���ٵ��ڴ�ָ��: %p\n", arr);

    // ��ӡ ����
    for (int i = 0; i < num; ++i) {
        // DerryװB�Ĵ�ӡ
        // &ȡ���ڴ��ַ *Ȼ��ȥֵ
        // &ȡ���ڴ��ַ *Ȼ��ȥֵ
        // &ȡ���ڴ��ַ *Ȼ��ȥֵ
        // .....
        printf("Ԫ�ص�ֵ:%d, Ԫ�صĵ�ַ:%p\n",
               *&*&*&*&*&*&*&*&
                       *&*&*&*&*&*&*&*&*&
                               *&*&*&*&*&*&*&*&
                                       *&*&*&*&*&*&*&*&
                                               *&*&*&*&*&*&*&*&
                                                       *&*&*&*&
                                                               *&*(arr + i)
                ,
               (arr + i)
        );
    }




    // =================================   �ڶ��������µĿռ�  �ӳ��ռ��С

    // C�ĸ�λ
    // C����ʦ�������⣺  realloc Ϊʲôһ��Ҫ���� arrָ�룬ΪʲôҪ���ܴ�С

    // ����
    int new_num;
    printf("�����������ӵĸ���");
    scanf("%d", &new_num);

    // ԭ���Ĵ�С4 + �����ӵĴ�С4  =  �ܴ�С 8
    // void *realloc (void *ǰ�濪�ٵ�ָ��, size_t�ܴ�С);
    int * new_arr = (int *) realloc(arr, sizeof(int) * (num + new_num));

    if (new_arr) { // new_arr != NULL �ҲŽ�if  ����0��true��
        int j = num; // 4��ʼ
        for (; j < (num + new_num); j++) { // 5 6 7 8
            arr[j] = (j + 10001);
        }

        printf("�� ���ٵ��ڴ�ָ��: %p\n", new_arr);

        // �� ��ӡ ����
        for (int i = 0; i < (num + new_num); ++i) {

            printf("�� Ԫ�ص�ֵ:%d, Ԫ�صĵ�ַ:%p\n",
                   *(arr + i),
                   (arr + i)
            );
        }
    }

    // ���Ѿ��ͷ�
    /*free(new_arr);
    new_arr = NULL;*/

    // 1000�д���
    // ������

    //  �ظ��ͷ�/�ظ�free VS�ᱼ����   CLion���Ż�(���ֲ�����)   [�����д��]
    /*free(new_arr);
    new_arr = NULL;*/

    // �����ͷš�����
    /*if (arr) {
        free(arr);   // �������ֵ��NULL����������ָ����
        arr = NULL;
    }*/

    /*if (new_arr) {
        free(new_arr);   // �������ֵ��NULL����������ָ����
        new_arr = NULL;
    }*/


    // TODO ========================== �������������Ͻڿ� ������ ���  ĩβ������
    if (new_arr) { // new_arr != NULL ��ȥif�� ���¿��ٵĶѿռ��ǳɹ���
        free(new_arr);
        new_arr = NULL;
        arr = NULL; // ������ָ���ǿ�ռ䣬Ϊ�˲���������ָ�룬ָ��NULL�Ŀռ�
    } else { // ���¿��ٵĶѿռ���ʧ�ܵ�
        free(arr);
        arr = NULL;
    }
    // ��ͼ���ڴ������  1


    return 0;
}
