#include<stdio.h>
int z(int n) {
	int a=1, sum=0,b=0;
	for (a = 1; a < n; a++) {
		if (n%a==0)
		{
			sum += a;
		}
		}
	if (sum==n) {
			b = 1;
		}
	return b;
}
int main()
{
	int n, m,i=0;
	printf("�����뷶Χ��");
	scanf_s("%d %d", &n, &m);
	for (n = n; n < m; n++) {
		int b = 0;
		b=z(n);
		if (b == 1) {
			printf("%d ", n);
			i += 1;
		}
		}
	if (i==0)
		{
			printf("\n");
		}
}