#include <stdio.h>
int main(void)
{
	char str1[6] = "Seoul";
	char str2[3] = {'i', 's', '\0'};
	char str3[] = "The capital city of Korea";
	printf("%s %s %s\n", str1, str2,str3 );

	char a[3] = { 'h', 'i'};		//�ڵ����� \0�Է�
	char b[10] = { "hello"};	//�ڵ����� \0�Է�
	char c[10] = "what's up";	//�ڵ����� \0�Է�

	//���Ṯ�� �� �ڸ��� ���� ���
	//char a[2] = { 'h', 'i' };		//�ڵ����� \0�Է�
	//char b[9] = { "hello" };	//�ڵ����� \0�Է�

	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
	return 0;
}