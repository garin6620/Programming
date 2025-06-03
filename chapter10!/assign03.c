/* 파일명: assign03.c
    * 내용: 사용자 ID와 비밀번호를 확인하여 로그인 여부를 판단하는 프로그램
    * 작성자: 영어교육과 2학년 민가린 202410035
    * 날짜: 2025.06.02.
    * 버전: v1.0
    */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct login {
    char id[5];
    char password[20];
} LOGIN;

void assignment03() {
    LOGIN arr[5] = { { "soo", "iamsoo" }, {"hee", "iamhee"},
        {"yez", "iamyez"}, {"est", "iamest"}, {"mew", "iammew"} };

    char input_id[5];
    char input_pw[20];

    while (1) {
        printf("ID: (0입력시 종료) ");
        scanf("%s", input_id);

        if (strcmp(input_id, "0") == 0)
            return;

        printf("PW: ");
        scanf("%s", input_pw);

        int success = 0;
        for (int i = 0; i < 5; i++) {
            if ((strcmp(arr[i].id, input_id) == 0) && (strcmp(arr[i].password, input_pw) == 0)) {
                success = 1;
                break;
            }
        }

        if (success)
            printf("로그인 성공\n");
        else
            printf("로그인 실패\n");
    }
}

int main() {
    assignment03();
    return 0;
}