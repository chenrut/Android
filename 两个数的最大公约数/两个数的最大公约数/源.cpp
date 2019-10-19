#include<stdio.h>
int main()
{
	int a, b,c,d;
	printf("输入两个数：");
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		c = a;
		a = b;
		b = c;
	}
	for (d = b; d > 1; d--) {
		if (b % d == 0) {
			if (a % d == 0) {
				break;
			}
		}
	}
	printf("这两个数的最大公约数为%d", d);
	return 0;
}