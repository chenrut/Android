#include<stdio.h>
int main()
{
	int a, b = 1, c = 1,d,e=0,f,g=10;
	printf("ÇëÊäÈë£º");
	scanf_s("%d", &a);
	d = a;
	while (d > 9)
	{
		d /= 10;
		b++;
		c *= 10;
	}
	while (c>0)
	{
		d = a;
		d /= c;
		printf("%d ", d);
		a %= c;
		c /= 10;
	}
	
	return 0;
}