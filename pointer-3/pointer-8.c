#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;
	// i => 10, pi�� i �ּ�
	printf("i = %d, pi = %p\n", i, pi);

	(*pi)++; //pi���� ������ ����
				//���� �������� �� �� ���� 1����
	printf("i = %d, pi = %p\n", i, pi);		//11

	*pi++; //pi���� �������� pi�ּҸ� ����, (*pi/++)
	printf("i = %d, pi = %p\n", i, pi);
	return 0;
}