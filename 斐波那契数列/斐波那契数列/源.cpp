#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	scanf_s("%d", &a);
	int *b;
	b = (int*)malloc((a + 1) * sizeof(int));
	b[0] = 0;
	b[1] = 1;
	int c;
	for (c = 2; c < a; c++) {
		b[c] = b[c - 1] + b[c - 2];
	}
	for (c =1; c < a; c++) {
		printf("%d ", b[c]);
	}
	free(b);
	return 0;
}