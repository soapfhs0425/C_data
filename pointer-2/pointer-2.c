#include <stdio.h>		//printf 사용목적 헤더

int main(void)
{
	int i = 10; //정수 지정
	double f = 12.3;		//실수 지정
	int* pi = NULL;		//포인터 변수
								//NULL값으로 초기화

	double* pf = NULL;		//NULL값으로 초기화
	pi = &i;		//&은 주소를 의미(i의 주소)
	pf = &f;		//&은 주소를 의미(f의 주소)
					// 포인터 변수도 갖는 값이 변경 될 수 o
	//pf = &i;		주소 -> pf;

	printf("%d %p %d \n", *pi, &i, i);	
	printf("%p %p %.1lf \n", pf, &f, f);		//	주소(pf) 주소(&f) f의 값 출력(double형, 소수점 첫째자리까지)
	
	return 0;		//문제없이 종료
}
//int i 정수형변수 : 값 지정
//int *j 포인터변수 : 정수형을 나타내는 주소 지정
//i -> 값
//&i -> 주소
//j -> 포인터변수이므로 주소
//*j -> 포인터변수 * 붙임(if 출력) -> 나타내는 주소에 가서 값을 가져옴