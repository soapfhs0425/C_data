#include <stdio.h>
int fun1(); // 함수 원형(함수 선언)
int fun2();
//함수가 main 아래위치, 해당 함수가 존재하는 것을 미리 선언
//끝에 ;붙임

int main(void) {	//void는 형 없음, 생략가능
	printf("메인 시작\n");//1
	fun1();//2  //함수호출, 인수를 보내지 않음
	printf("메인 끝\n");//10   
	return 0;//11	//완전 종료
}
int fun1() { //매개변수도 없음, return으로 반환할 값의 형을 기입니다( return 0 -> int )
	printf("fun1함수 시작\n");//3
	fun2();//4 //함수호출
	printf("fun1함수 끝\n");   //8	
	return 0;//9	//fun1()를 호출한 다음 수행 줄로 이동
}
int fun2() {//매개변수도 없음, 
	printf("fun2함수 시작\n");//5
	printf("fun2함수 끝\n");//6
	return 0;//7	//fun2()를 호출한 다음 수행 줄로 이동
}


//인수를 보내고 매개변수로 받음