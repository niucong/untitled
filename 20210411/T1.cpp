// TODO Ԥ���������Ǳ�������Ԥ��������Ҫ����ı��滻�Ĳ������ı��滻���Ժ�ר����Linux��ȥ������Ԥ������������ #xxx ��д����������ע��Ŷ

/*
                                #include  ����ͷ�ļ�
                                #if       if�жϲ���  ��if�ķ��� ����endif��
                                #elif     else if
                                #else     else
                                #endif    ����if
          #define   ����һ����
          #ifdef    �������������� ��if�ķ��� ����endif��
          #ifndef   ���û�ж�������� ��if�ķ��� ����endif��
          #undef    ȡ���궨��
          #pragma   �趨��������״̬
 */

#include <iostream>
using namespace std;

int main() {
    // std::cout << "��" << std::endl;

#if 1 // if
    cout <<  "��" << endl;

#elif 0 // else if
    cout <<  "��" << endl;

#else
    cout << "��������" << endl;

#endif // ����if
    cout << "����if" << endl;

    return 0;
}
