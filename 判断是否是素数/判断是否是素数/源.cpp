#include<stdio.h>
int main()
{
	int a=2,b=2,c=0;
printf("������һ������2������");
	scanf_s("%d", &a);
	
		for (; b <= a / 2; b++) {
			if (a % b == 0) {
				c = 1;
				break;;
			}
		}
		if (c == 0) {
			printf("%d������\n", a);
		}
		else {
			printf("%d��������\n", a);
		}
	
	return 0;
}