#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	char ex[4][5] = {
		"abc", "xyz", "kkkk", "love"		//���� 0, 1, 2, 3��
	};

	printf("%c\n", ex[1][2]);
	printf("%c\n", ex[3][3]);
	printf("%s\n", ex[1]);

	scanf("%s", &ex[0][3]);		//0�� 3�� ��� �Է� �� &����
	printf("%c\n", ex[0][3]);		//�� ��� ��� %c
	printf("%s\n", ex[0]);		//�� �� ��� %s

	scanf("%s", &ex[2]);		//�� ��ü�� & �� �ᵵ ����
	printf("%s\n", ex[2]);




	return 0;
}