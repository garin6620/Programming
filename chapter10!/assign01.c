/* 파일명: assign01.c
    * 내용: LOGIN 구조체 변수를 선언한 다음, ID와 비밀번호를 입력받아 비밀번호를 *로 출력하는 프로그램
    * 작성자: 영어교육과 2학년 민가린 202410035
    * 날짜: 2025.06.02.
    * 버전: v1.0
    */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct login {
    char id[20];
    char password[20];
} LOGIN;    //LOGIN은 변수 아닌, 사용자 정의형(=데이터 타입)

void assignment01() {
    LOGIN user;     //구조체 변수 지정 

    printf("ID: ");
    scanf("%s", &user.id);
    printf("Password: ");
    scanf("%s", &user.password);

    printf("ID: %s\n", user.id);
    printf("PW: ");

    for (int i = 0; i < strlen(user.password); i++)     //strlen함수= 비밀번호가 몇 글자 확인
        printf("*");
}

int main() {
    assignment01();
    return 0;
}