#include<stdio.h>
int main()
{
	int a, b,t;
	printf("��������������");
		scanf_s("%d %d", &a, &b);
		t = a % b;
		for (; b > 0;) {
			t = a % b;
			a = b;
			b = t;
		}
		printf("�������������Լ��Ϊ%d", a);
		return 0;
}