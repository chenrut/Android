#include<stdio.h>
int main()
{
	int a;
	printf("ÇëÊäÈë³É¼¨£º");
	scanf_s("%d",&a);
	if (a >=90) {
		printf("A");
	}
	else if (a >= 80) {
		printf("B");
	}
	else if (a >= 70) {
		printf("C");
	}
	else if (a>= 60) {
		printf("D");
	}
	else { printf("E"); 
	}
	return 0;
	}
