#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	char ex[4][5] = {
		"abc", "xyz", "kkkk", "love"		//각각 0, 1, 2, 3행
	};

	printf("%c\n", ex[1][2]);
	printf("%c\n", ex[3][3]);
	printf("%s\n", ex[1]);

	scanf("%s", &ex[0][3]);		//0행 3열 요소 입력 시 &붙힘
	printf("%c\n", ex[0][3]);		//한 요소 출력 %c
	printf("%s\n", ex[0]);		//한 행 출력 %s

	scanf("%s", &ex[2]);		//행 자체가 & 안 써도 ㄱㅊ
	printf("%s\n", ex[2]);




	return 0;
}