#include <stdio.h>
//�����͸� ������ �� *�� �� �� ����ϸ� �������� ������(���� ������)�� �����Ѵ�. 
//�ڷ���** ������ �̸�;
int main(void)
{
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	printf("i = %d\n", i);

	**q = 300;
	printf("i = %d\n", i);

	return 0;
}