/* 파일명: assign08.c
    * 내용: PRODUCT 구조체를 선언한 다음, 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램
    * 작성자: 영어교육과 2학년 민가린 202410035
    * 날짜: 2025.06.02.
    * 버전: v1.0
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

    printf("제품명? ");
    scanf("%s", coffee.name);
    printf("가격? ");
    scanf("%d", &coffee.price);
    printf("재고? ");
    scanf("%d", &coffee.remain);
}

void print_product(PRODUCT coffee) {
    printf("[%s %d원 재고: %d]", coffee.name, coffee.price, coffee.remain);
}

int main() {
    assignment08();
    print_product(coffee);      //함수 호출시 데이터형 생략, 변수명'만'인자로 전달 
    return 0;
}