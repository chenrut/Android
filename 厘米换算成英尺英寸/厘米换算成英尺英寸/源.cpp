#include<stdio.h>
int main()
{
	int a;
	printf("����������:");
	scanf_s("%d",&a);
	int b = a /30.48;
	int c = (a / 30.48-b)*12;
	printf("ת����%dӢ�� %dӢ��",b,c);
	return 0;
}