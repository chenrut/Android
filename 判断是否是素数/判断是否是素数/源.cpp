#include<stdio.h>
int main()
{
	int a=2,b=2,c=0;
printf("请输入一个大于2的数：");
	scanf_s("%d", &a);
	
		for (; b <= a / 2; b++) {
			if (a % b == 0) {
				c = 1;
				break;;
			}
		}
		if (c == 0) {
			printf("%d是素数\n", a);
		}
		else {
			printf("%d不是素数\n", a);
		}
	
	return 0;
}