#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个正三位数");
	scanf_s("%d", &a);
	int b = a / 100;           //百位数
	int c = a % 10;            //个位数
	int e = a - c - b * 100;    //十位数;
	int f = b + e + c * 100;
	printf("逆过来的数为%d",f);
	return 0;
}

