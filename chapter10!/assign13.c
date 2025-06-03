/* ���ϸ�: assign13.c
    * ����: ���簢�� ������ �Է¹ް� ����ϴ� ���α׷�
    * �ۼ���: ������� 2�г� �ΰ��� 202410035
    * ��¥: 2025.06.02.
    * ����: v1.0
    */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct point {
    int x;
    int y;
} POINT;

typedef struct rect {
    POINT right_top;
    POINT left_bottom;
} RECT;

RECT rc;
void assignment13(RECT* rc) {
    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &rc->left_bottom.x, &rc->left_bottom.y);
    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &rc->right_top.x, &rc->right_top.y);
}

void print_rect(RECT rc) {
    printf("[RECT ���ϴ���:(%d %d) ������:(%d %d)]", rc.left_bottom.x, rc.left_bottom.y, rc.right_top.x, rc.right_top.y);
}

int main() {
    assignment13(&rc);
    print_rect(rc);
}