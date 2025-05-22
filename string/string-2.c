#include <stdio.h>
int main(void)
{
	char str1[6] = "Seoul";
	char str2[3] = {'i', 's', '\0'};
	char str3[] = "The capital city of Korea";
	printf("%s %s %s\n", str1, str2,str3 );

	char a[3] = { 'h', 'i'};		//자동으로 \0입력
	char b[10] = { "hello"};	//자동으로 \0입력
	char c[10] = "what's up";	//자동으로 \0입력

	//종료문자 들어갈 자리가 없을 경우
	//char a[2] = { 'h', 'i' };		//자동으로 \0입력
	//char b[9] = { "hello" };	//자동으로 \0입력

	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
	return 0;
}