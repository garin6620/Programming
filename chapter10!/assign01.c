/* ���ϸ�: assign01.c
    * ����: LOGIN ����ü ������ ������ ����, ID�� ��й�ȣ�� �Է¹޾� ��й�ȣ�� *�� ����ϴ� ���α׷�
    * �ۼ���: ������� 2�г� �ΰ��� 202410035
    * ��¥: 2025.06.02.
    * ����: v1.0
    */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct login {
    char id[20];
    char password[20];
} LOGIN;    //LOGIN�� ���� �ƴ�, ����� ������(=������ Ÿ��)

void assignment01() {
    LOGIN user;     //����ü ���� ���� 

    printf("ID: ");
    scanf("%s", &user.id);
    printf("Password: ");
    scanf("%s", &user.password);

    printf("ID: %s\n", user.id);
    printf("PW: ");

    for (int i = 0; i < strlen(user.password); i++)     //strlen�Լ�= ��й�ȣ�� �� ���� Ȯ��
        printf("*");
}

int main() {
    assignment01();
    return 0;
}