#include<stdio.h>
#include<stdlib.h>
int main() {
	int b,i;
	printf("����������ĸ�����");
	scanf_s("%d", &b);
	int *a;
	a = (int*)malloc(b * sizeof(int));//a��ϵͳ����һ��ռ�
	for (i = 1; i <= b; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i <= b; i++) {
		printf("a[%d]=%d ", i, a[i]);
	}
	free(a);     //�ͷ�a����ڴ棬�н��л����ٽ費��
	return 0;
}