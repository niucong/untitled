//
// Created by Niucong on 2021/3/5.
//

#include <stdio.h>

// ö�� int ���͵�
enum CommentType {
    TEXT = 10,
    TEXT_IMAGE,
    IMAGE
};

// ��ҵ������� ���컯����
int mainT11_304() {
    // Clion���ߵ�д�����£�
    enum CommentType commentType = TEXT;
    enum CommentType commentType1 = TEXT_IMAGE;
    enum CommentType commentType2 = IMAGE;

    // VS���ߵ�д�����£�
    // CommentType commentType = TEXT;

    printf("%d, %d, %d \n", commentType, commentType1, commentType2);

    return 0;
}

