#include<stdio.h>
void swap(int *a ,int *b);
int main()
{
	int a,b;
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("½»»»ºó£¬a=%d£¬b=%d", a, b);
	return 0;
}
void swap(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}