#include<stdio.h>
int main() {
	int z[10],a=0,b=9;
	do
	{
		z[b] = 0;
		b--;
	} while (b!=-1);
	while (a!=-1)
	{
		scanf_s("%d", &a);
		if (a >= 0 && a <= 9) {
			z[a]++;
		}
		}
	a = 1;
	while (a<10)
	{
		printf("%d一共出现了%d次\n", a,z[a]);
		a++;
	}
	return 0;
}

