#include<stdio.h>
int noexcopt()
{
	double a, b;
	scanf_s("%f %f", &a,&b);
	printf("%f", a - b);
	return 0;
}