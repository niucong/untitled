#ifndef CLIONCPPPROJECT_T2_H // ���û�ж��������  ���ѭ������������
#define CLIONCPPPROJECT_T2_H // �ҾͶ��������

// 100 �д���
// ��һ���ܹ�����
// �ڶ���  ��n�˽�����    ֱ�� ���ѭ��������������

// ---------------
#ifndef isRelease // ���û��isRelease�����
#define isRelease 1 // �Ƿ�����ʽ������ ���ҾͶ���isRelease����꡿

#if isRelease == true
#define RELEASE // ��ʽ������ ����RELEASE��

#elif isRelease == false
#define DEBUG // ���Ի�����  ����DEBUG��

#endif // ���������if
#endif // ���������if

#endif //CLIONCPPPROJECT_T2_H // ���������if
