#include<stdio.h>
int main()
{
	int x=0,a,b;
	scanf_s("%d %d", &a,&b);
	int i;
	for (; a <= b; a++) {
		int isprime = 1;
		for (i = 2; i < a; i++) {
			if (a % i == 0) {
				isprime = 0;
				break;
			}
		}
		if (isprime == 1) {
			x++;
			printf("%d", a);
			if (x < 10) {
				printf(" ");
			}
			else {
				printf("\n");
				x = 0;
			}
		}
	}
	return 0;
}