#include<stdio.h>
int main()
{
	int a, b;
	printf("Ӧ�ս�");
	scanf_s("%d",&a);
	printf("ʵ�ս�");
	scanf_s("%d",&b);
	int c = b - a;
	if (c<0) {
		printf("����");
	}else {
				printf("Ӧ���㣺%dԪ", c);
		return 0;
	}
	
}