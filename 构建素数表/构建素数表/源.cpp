#include<stdio.h>
int main()
{
	const int n = 500;
	int i = 0, prime[n];
	while (i < n) {
		prime[i] = 1;
		i++;
	}
	int x ;
	for (x = 2; x < n; x++) {
		if (prime[x]) {
			for (i = 2; i * x < n; i++) {
				prime[i * x] = 0;
			}
		}
	}
		printf("已构造%d以内的素数表\n",n);
		int a = 0;
		for (i = 2; i < n; i++) {
			if (prime[i] == 1) {
				printf("%d\t", i);
				a++;
				if (a == 10) {
					printf("\n");
					a = 0;
				}
			}
		}
		return 0;
	}

