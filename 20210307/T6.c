// �ļ���С�Ļ�ȡ

#include <stdio.h>
#include <stdlib.h> // �ļ��Ĳ������������ͷ�ļ������
#include <string.h>

int main() {

    // û��ר�ŵ� �ļ���С��ȡ API��
    // ��˼·������ȡͷָ�� ͷָ��Ų��λ�ã�Ų������󣬾Ϳ�������ļ���С

    char * fileNameStr = "D:\\Temp\\DerryFile.txt"; // ��Դ

    // ��Ȼ��ʹ����w�������Զ������ļ� 0kb
    FILE * file = fopen(fileNameStr, "rb"); // file == ָ��

    if (!file) {
        printf("�ļ���ʧ�ܣ����������⣺·��Ϊ%s·�����ļ���������ʲô����\n", fileNameStr);
        exit(0); // �˳�����
    }

    // ���ǲ���ָ�������

    // SEEK_SET����ͷ��  SEEK_CUR����ǰ��  SEEK_END����β��
    fseek(file, 0, SEEK_END);
    // �ߵ�����֮��file���˸��ḻ��ֵ�������fileָ�븳ֵ��Ų���ļ�¼��Ϣ

    // ��ȡ   �ոո�file��ֵ�ļ�¼��Ϣ
    // ��ʵ�˺���Ŀ���ǣ�����ƫ�Ƶ�λ��,ftell �� 0 ��ʼͳ�Ƶ���ǰ��SEEK_END��
    long file_size = ftell(file);
    printf("%s�ļ����ֽڴ�С��:%ld\n", fileNameStr, file_size);
    // 8 �ֽ� (8 �ֽ�)

    // �ر��ļ�
    fclose(file);

    return 0;
}

