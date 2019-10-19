#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p = 0,a=1;
	while (p=(int*)malloc(100*1024*1024))
	{
		a++;
	}
	printf("系统能借给你%d00mb的空间",a);
	free(p);
	return 0;
}