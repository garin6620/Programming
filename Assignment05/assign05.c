/* 파일명: assignment-05.c

  * 내용: PA05. 몸무게를 입력받아 출력하는 프로그램을 작성, 몸무게는 실수로 입력, 소수점 이하 2자리까지 출력

  * 작성자: 민가린

  * 날짜: 2025.3.25

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float weight;

	printf("몸무게? ");

	scanf("%f", &weight);
	printf("입력한 몸무게는 %.2f입니다.\n", weight);

	return 0;
}