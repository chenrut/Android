#include<stdio.h>
int main()
{
	int a, b,t;
	printf("请输入两个数：");
		scanf_s("%d %d", &a, &b);
		t = a % b;
		for (; b > 0;) {
			t = a % b;
			a = b;
			b = t;
		}
		printf("这两个数的最大公约数为%d", a);
		return 0;
}