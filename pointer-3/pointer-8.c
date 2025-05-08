#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;
	// i => 10, pi는 i 주소
	printf("i = %d, pi = %p\n", i, pi);

	(*pi)++; //pi값을 가지고 오고
				//다음 문장으로 갈 때 값을 1증가
	printf("i = %d, pi = %p\n", i, pi);		//11

	*pi++; //pi값을 가져오고 pi주소를 증가, (*pi/++)
	printf("i = %d, pi = %p\n", i, pi);
	return 0;
}