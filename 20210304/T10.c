//
// Created by Niucong on 2021/3/5.
//

// ϵͳԴ�붼������д��

#include <stdio.h>
#include <stdlib.h>

struct DAO {
    char name[10];
    int age;
    char sex;
};

// �����ṹ��ı���������д���岻����Ϊû�����֣�
typedef struct {
    char name[10];
    int age;
    char sex;
};

// Դ��������д��
// ���ṹ��AV ȡ��һ����������AV
typedef struct {
    char name[10];
    int age;
    char sex;
} AV;

// ȡһ������
typedef struct DAO DAO;

void show(DAO dao) {} // �ڲ�ͬ������ �ֵ�Ҫ�ӣ��ֵĲ��ü� �ֲ��컯

int mainT10_304() {
    // VS ����Ҫ����д��   Clion���� Ҫ����ؼ���  ���벻ͳһ
     struct DAO * dao0  = malloc( sizeof(struct DAO));

    // �ӱ�����  �����ͳһ��

    // VS
    DAO * dao  = malloc( sizeof(DAO));

    // CLion����Ҳ����д
    DAO * dao1  = malloc( sizeof(DAO));

    // xxx ����Ҳ����д
    DAO * dao2  = malloc( sizeof(DAO));

    // �ӱ�����  �����ͳһ��
    // C���Դ�룬ϵͳԴ��...��Ϊʲô typedef ��ȡһ���ͽṹ��һ�������֣����ݴ����д��������һ�£�
    AV av = {"VideoInfo", 54, 'M'}; // �ṹ��  VS  Clion  xxx����  ����д��

    AV * avp = malloc(sizeof(AV)); // �ṹ��ָ��

    return 0;
}
