// 3.ָ��Ų����ȡ�ַ�����Ϣ(��дAPI)��

//#include <stdio.h>
//
//// ��ȡ����
//
//int getLen(char * string) {
//    int count = 0;
//    while (*string) { // *string != '\0' �Ҿ�һֱѭ��
//        string ++;
//        count++;
//    }
//    return count;
//}
//
//int main() {
//    char string[] = {'A', 'B', 'C', 'D', '0', '\0'}; // printf�����ܹ�ͣ��������Ҫ��ӡϵͳֵ
//
//    int r =  getLen(string);
//    printf("������:%d\n",r);
//
//    return 0;
//}




//#include <stdio.h>

// C/C++������ ������Ϊ�������ݣ���������Ż���ָ�루Ϊ�˸�Ч�ʣ�
void getLen(int *resultLen, int intarr[]) { // ģ���� strLen����

    // ������Ϊ�������� �Ͳ�������д��

    // sizeof(intarr)28 / sizeof(int)4 = 7
    /*int len = sizeof(intarr) / sizeof(int);
    printf("getLen len������:%d\n", len);*/

    // �ֶ����㳤��
    int count = 0;
    while (*intarr != '\0') {
        intarr++;
        count++;
    }
    *resultLen = count;
}

void doEngine(int len) {

}

int main() {
    // int 4   char 1

    // char string[] = {'A', 'B', 'C', 'D', '0', '\0'}; // printf�����ܹ�ͣ��������Ҫ��ӡϵͳֵ

    int intarr[] = {1, 2, 3, 0, 5, 6, 7}; // 0   \0  �������� for ���������жϵ�ʱ������г�ͻ ��int�������顿

    // int����ʹ�����ַ�ʽ����һ�ַ�ʽ��
    // sizeof(intarr)28 / sizeof(int)4 = 7
    int len = sizeof(intarr) / sizeof(int);
    printf("len������:%d\n", len);

    int result; // &ȡ��result�����ĵ�ַ������
    getLen(&result, intarr);
    printf("getLen len������:%d\n", result);

    // strLen API ���÷�̫�� ���ڶ��ַ�ʽ�� ����

    // ��ʵ����ֱ�ӵ��ã��������������ݳ���
    doEngine(len);

    return 0;
}