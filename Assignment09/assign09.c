/* 파일명: assignment-09.c

  * 내용: PA09. 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성

  * 작성자: 민가린

  * 날짜: 2025.3.25

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("16진수 정수? ");

	scanf("%x", &num);
	printf("16진수 %x는 10진수로 %d입니다.\n", num, num);
	return 0;
}
