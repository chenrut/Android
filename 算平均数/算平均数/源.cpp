#include<stdio.h>
int main()
{
	int a=0,b=1,c=-1;
	while (a!=-1)
	{
		printf("请输入数字：");
		scanf_s("%d", &a);
		b = b + a;
		c++;
	}
	printf("一共输入%d个数，平均数为%f", c, 1.0*b / c);
	return 0;
}