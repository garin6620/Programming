/* ���ϸ�: assign08.c
    * ����: PRODUCT ����ü�� ������ ����, ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷�
    * �ۼ���: ������� 2�г� �ΰ��� 202410035
    * ��¥: 2025.06.02.
    * ����: v1.0
    */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct product {
    char name[20];
    int price;
    int remain;
} PRODUCT;

PRODUCT coffee;

void assignment08() {

    printf("��ǰ��? ");
    scanf("%s", coffee.name);
    printf("����? ");
    scanf("%d", &coffee.price);
    printf("���? ");
    scanf("%d", &coffee.remain);
}

void print_product(PRODUCT coffee) {
    printf("[%s %d�� ���: %d]", coffee.name, coffee.price, coffee.remain);
}

int main() {
    assignment08();
    print_product(coffee);      //�Լ� ȣ��� �������� ����, ������'��'���ڷ� ���� 
    return 0;
}