/* 파일명: assignment-02.c

  * 내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성, 학생의 번호는 정수로, 학점은 실수로 입력

  * 작성자: 민가린

  * 날짜: 2025.3.25

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;
	float grade;

	printf("번호? ");

	scanf("%d", &number);


	printf("학점? ");

	scanf("%f", &grade);


	printf("%d번 학생의 학점은 %.1f입니다.\n", number, grade);

	return 0;
}
