/* ���ϸ�: assign03.c
    * ����: ����� ID�� ��й�ȣ�� Ȯ���Ͽ� �α��� ���θ� �Ǵ��ϴ� ���α׷�
    * �ۼ���: ������� 2�г� �ΰ��� 202410035
    * ��¥: 2025.06.02.
    * ����: v1.0
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
        printf("ID: (0�Է½� ����) ");
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
            printf("�α��� ����\n");
        else
            printf("�α��� ����\n");
    }
}

int main() {
    assignment03();
    return 0;
}