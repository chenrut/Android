#include<stdio.h>
#include<stdlib.h>
int main() {
	int b,i;
	printf("请输入数组的个数：");
	scanf_s("%d", &b);
	int *a;
	a = (int*)malloc(b * sizeof(int));//a向系统借了一块空间
	for (i = 1; i <= b; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i <= b; i++) {
		printf("a[%d]=%d ", i, a[i]);
	}
	free(a);     //释放a借的内存，有借有还，再借不难
	return 0;
}