#include<stdio.h>
int main()
{
	int a, b;
	printf("����������ʱ��");
	scanf_s("%d",&a);
	printf("����������ʱ��");
	scanf_s("%d",&b);
	int c = a % 100;
	int d = (a/100+(c+b)/60)*100+(c+b)%60;//ԭ������Ϊint c = a % 100;int d = c + b;int e = d / 60;int f = d % 60;int g = (a / 100 + e) * 100 + f;
	printf("ʱ������֮����%d",d);
	return 0;
}
