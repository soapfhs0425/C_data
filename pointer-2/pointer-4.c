#include <stdio.h>
int main(void)
{
    int a = 100;  //�Ϲݺ��� ����
    int b = 200; 
    int* p = NULL; //�����ͺ��� ����

    p = &a;     // a�ּҸ� �����ͺ��� p�� ����
    printf("a �ּ� = %p\n", &a);            // a�� �ּ�
    printf("p �ּ� = %p\n", p);             // p�� �ּ�  ���
    printf("a �� = %d\n", a);                // a�� ��, 100
    printf("p ��= %d\n", *p);               // p�� ����Ű�� �ּ��� ��, 100
  

    p = &b;    // b�ּҸ� �����ͺ��� p�� ����
    printf("p �ּ� = %p\n", p);               // p�� �ּ�  ���    
    printf("p �� = %d\n", *p);                    // p�� ����Ű�� �ּ��� ��, 200

    return 0;
}