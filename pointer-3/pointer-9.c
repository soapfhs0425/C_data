#include <stdio.h>
int main(void)
{
	int* pnum, num1 = 200, num2 = 300;
	//punm�� ���� �����ͺ���
	//num1, num2�� �Ϲ� ����
	pnum = &num1;
	(*pnum) += 40;		//num1 �ּҸ� pnum�� ���
								//(*pnum) = (*pnum) + 40\
								//*pnum�� pnum�� ��Ÿ���� ���� ���� 40 ����
	pnum = &num2;		//num2 �ּҸ� pnum�� �ٽ� ���
	(*pnum) += 50;		//pnum�� ��Ÿ���� ���� ���� 50 ����
	printf("num1 = %d  num2 = %d\n", num1, num2);
	//240 350


	return 0;
}