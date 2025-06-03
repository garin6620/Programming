/* 파일명: assign13.c
    * 내용: 직사각형 정보를 입력받고 출력하는 프로그램
    * 작성자: 영어교육과 2학년 민가린 202410035
    * 날짜: 2025.06.02.
    * 버전: v1.0
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
    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &rc->left_bottom.x, &rc->left_bottom.y);
    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &rc->right_top.x, &rc->right_top.y);
}

void print_rect(RECT rc) {
    printf("[RECT 좌하단점:(%d %d) 우상단점:(%d %d)]", rc.left_bottom.x, rc.left_bottom.y, rc.right_top.x, rc.right_top.y);
}

int main() {
    assignment13(&rc);
    print_rect(rc);
}