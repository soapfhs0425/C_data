#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;		//���� ����
	char fruits[3][20];		//���� �̸� �迭 ����( 3�� 20�� )
	for (i = 0; i < 3; i++) {			// i<3 ���� �����ϸ鼭 �ݺ�, ���
		printf("���� �̸��� �Է��Ͻÿ� : ", fruits[i]);		//���� �̸��� ���� �޼��� ���
		scanf("%s", fruits[i]);		//���� �̸��� �Է¹ް�, �迭�� ����
	}
	for (i = 0; i < 3; i++)		 //�Է¹��� ���� �̸� ����ϴ� �ݺ���( i < 3���� �ݺ� )
		printf("%d��° ���� : %s\n", i, fruits[i]);		//n��°������ �̸� ���



	return 0;		//�������� ����
}