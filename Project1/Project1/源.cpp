#include<stdio.h>
int main() {
	char a[100];
	scanf_s("%s", &a,100);
	int b,c=0;
	for (b = 0; b < 3; b++) {
		printf("%c",a[b]);
	}
	c = a[0] + a[1];
	printf("%s", c);
	return 0;
}
