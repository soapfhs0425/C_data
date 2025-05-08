#include <stdio.h>
int main(void)
{
	int* pnum, num1 = 200, num2 = 300;
	//punm은 정수 포인터변수
	//num1, num2는 일반 변수
	pnum = &num1;
	(*pnum) += 40;		//num1 주소를 pnum에 기억
								//(*pnum) = (*pnum) + 40\
								//*pnum은 pnum이 나타내는 곳의 갑셍 40 더함
	pnum = &num2;		//num2 주소를 pnum에 다시 기억
	(*pnum) += 50;		//pnum이 나타내는 곳의 값에 50 증가
	printf("num1 = %d  num2 = %d\n", num1, num2);
	//240 350


	return 0;
}