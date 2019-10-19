#include<stdio.h>
int main() {
	int c;
	scanf_s("%d", &c);
	int a[3], i;
	for (i = 0; i < 3; i++) {
		a[i] = c % 10;
		c /= 10;
	}
	for (; a[2] != 0; a[2]--) {
		printf("B");
	}
	for (; a[1] != 0; a[1]--) {
		printf("S");
	}
	int z;
	for (z=1; z<=a[0]; z++) {
		printf("%d", z);
	}
	return 0;
}