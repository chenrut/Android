#include<stdio.h>
int main()
{
	int a;
	printf("������һ������λ��");
	scanf_s("%d", &a);
	int b = a / 100;           //��λ��
	int c = a % 10;            //��λ��
	int e = a - c - b * 100;    //ʮλ��;
	int f = b + e + c * 100;
	printf("���������Ϊ%d",f);
	return 0;
}

