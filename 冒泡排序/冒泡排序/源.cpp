#include<stdio.h>
#include<stdlib.h>
int swap(int* a, int* b,int *z);
int main() {
	int a;
	printf("请输入数组个数:");
	scanf_s("%d", &a);
	int* b;
	b = (int*)malloc((a + 1) * sizeof(int));
	int c;
	for (c = 0; c < a; c++) {
		scanf_s("%d", &b[c]);
	}
	int z=1;
	for (; z != 0;) {
		z = 0;
		for (c = 1; c < a; c++) {
			if (b[c] < b[c - 1]) {
				swap(&b[c], &b[c - 1],&z);
			}
		}
	}
	for (c = 0; c < a; c++) {
		printf("%d ", b[c]);
	}
	free(b);
	return 0;
}
int swap(int* a, int* b,int*z) {
	int t=0;
	t = *a;
	*a = *b;
	*b = t;
	*z+=1;
	return *z;
}