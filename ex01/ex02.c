#include <stdio.h>
int fun1(); // �Լ� ����(�Լ� ����)
int fun2();

int main(void) {
	printf("���� ����\n");//1
	fun1();//2  
	printf("���� ��\n");//10   
	return 0;//11
}
int fun1() {
	printf("fun1�Լ� ����\n");//3
	fun2();//4
	printf("fun1�Լ� ��\n");   //8
	return 0;//9
}
int fun2() {
	printf("fun2�Լ� ����\n");//5
	printf("fun2�Լ� ��\n");//6
	return 0;//7
}