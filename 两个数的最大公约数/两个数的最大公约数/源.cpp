#include<stdio.h>
int main()
{
	int a, b,c,d;
	printf("������������");
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
	printf("�������������Լ��Ϊ%d", d);
	return 0;
}