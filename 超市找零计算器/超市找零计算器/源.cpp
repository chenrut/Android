#include<stdio.h>
int main()
{
	int a, b;
	printf("应收金额：");
	scanf_s("%d",&a);
	printf("实收金额：");
	scanf_s("%d",&b);
	int c = b - a;
	if (c<0) {
		printf("金额不足");
	}else {
				printf("应找零：%d元", c);
		return 0;
	}
	
}