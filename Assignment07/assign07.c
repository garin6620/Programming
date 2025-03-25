/* 파일명: assignment-07.c

  * 내용: PA07. 커피 사이즈(S,T,G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성, 커피 사이즈는 S,T,G 세 가지 문자 중 하나로 입력

  * 작성자: 민가린

  * 날짜: 2025.3.25

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char size;
	int quantity;

	printf("커피 사이즈(S,T,G)와 주문 수량? ");

	scanf("%c %d", &size, &quantity);
	printf("%c 사이즈 %d잔을 주문합니다.\n", size, quantity);
	return 0;
}

