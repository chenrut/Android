#include<stdio.h>
int main() {
	int a[4][4];
	int b,c;
	for (b = 1; b < 4; b++) {
		for (c = 1; c < 4; c++) {
			scanf_s("%d", &a[b][c]);
		}
	}
	b = a[1][1]*a[2][2] * a[3][3] + a[1][2] * a[2][3] * a[3][1] + a[1][3] * a[2][1] * a[3][2] - a[1][1] * a[2][3] * a[3][2] - a[1][2] * a[2][1] * a[3][3] - a[1][3] * a[2][2] * a[3][1];
	printf("%d", b);
	return 0;
}