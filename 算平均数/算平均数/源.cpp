#include<stdio.h>
int main()
{
	int a=0,b=1,c=-1;
	while (a!=-1)
	{
		printf("���������֣�");
		scanf_s("%d", &a);
		b = b + a;
		c++;
	}
	printf("һ������%d������ƽ����Ϊ%f", c, 1.0*b / c);
	return 0;
}