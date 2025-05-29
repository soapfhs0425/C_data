#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;		//변수 선언
	char fruits[3][20];		//과일 이름 배열 지정( 3행 20열 )
	for (i = 0; i < 3; i++) {			// i<3 동안 증가하면서 반복, 출력
		printf("과일 이름을 입력하시오 : ", fruits[i]);		//과일 이름을 받을 메세지 출력
		scanf("%s", fruits[i]);		//과일 이름을 입력받고, 배열에 저장
	}
	for (i = 0; i < 3; i++)		 //입력받은 과일 이름 출력하는 반복문( i < 3동안 반복 )
		printf("%d번째 과일 : %s\n", i, fruits[i]);		//n번째인지와 이름 출력



	return 0;		//문제없이 종료
}