#include <stdio.h>
int main(void)
{

	int i;
	char str[4];		//���ڹ迭 4�ڸ�
	str[0] = 'a';			//�� �ϳ��� ����
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';		//NULL �� ����
	// char str[4] ="abc";<-�ֵ���ǥ�� null�� �� �־ ��
	//char str[4] =  {'a', 'b', 'c', '\0'};   <-null�� �־�� ��
	i = 0;
	printf("%s\n", str);
	//while (str[i] != '\0')		//�ݺ���(null ���� �ƴ� ��)
	//								//null ���� ������ ����
	//{
	//	printf("%c", str[i]);		//1���� -> %c
	//	i++;		//0~2����� ��� �����ϸ鼭 �ݺ�
	//}

	for (i = 0; i < 3; i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}
//for(�ʱⰪ; ���ǽ�; ������;)