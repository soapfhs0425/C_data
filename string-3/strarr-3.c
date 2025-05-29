#define page 5		//기호상수 5라는 숫자를 page라고 칭함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>		//str~ 문자열 함수 포함	//stremp 사용
int main(void)
{
	int i, index;
	char dic[page][2][30] = {		//page == 5.//3차원 5면 -> 2행 -> 30열 구성
		{"book", "책"}, {"boy", "소년"}, {"computer", "컴퓨터"}, {"apple", "사과"}, {"rain", "비"}};
	//각 0, 1, 2, 3, 4면		//0면 -> 0행 : book / 1행 : 책 / 2행 : 컴퓨터 . . .
	//0면 -> 0행 : book -> 0열 b, 1열 o, 2열 o, 3열 k
	//1행 : 책 -> 0열 책
	char word[30];		//30열 선언 -> 입력 받을 글자 배열
	printf("단어를 입력하세요 : ");
	scanf("%s", word);		//29글자 이내 글자 입력
	//&(주소) 쓰지 않는 이유 : 문자배열이름만 쓰는 경우 => 그 자체가 주소를 의미.
	for (i = 0; i < page; i++)
	{
		if (strcmp(dic[i][0], word) == 0)
		//각 면마다 0행의 영어 단어와 비교
		//strcmp : 문자열 비교, 같은 것이 있으면 0 발생
		{
			printf("%s : %s\n", word, dic[i][1]); return 0;
			//해당하는 면의 1행을 출력(1행은 한글로 번역된 데이터)
			//정상적 종료
		}
	}
	printf("사전에서 발견되지 않았습니다.\n");
	//5번 반복문을 수행을 해도 찾지 못 한 경우
}

