#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入现在时间");
	scanf_s("%d",&a);
	printf("请输入流逝时间");
	scanf_s("%d",&b);
	int c = a % 100;
	int d = (a/100+(c+b)/60)*100+(c+b)%60;//原本代码为int c = a % 100;int d = c + b;int e = d / 60;int f = d % 60;int g = (a / 100 + e) * 100 + f;
	printf("时间流逝之后，是%d",d);
	return 0;
}
