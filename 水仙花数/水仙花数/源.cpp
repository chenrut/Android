#include<stdio.h>
int main()
{
	int a, b = 10, c=1,z;
	printf("请输入一个数(3到7之间)，我们将输出1到这个位数之间的所有水仙花数：");
	scanf_s("%d", &a);
	z = a;
	while (a>1)
	{
		b *= 10;
		c *= 10;
		a--;
	}
	while (c<b)
	{
		int t = c;
		int sum = 0;
		do
		{
			int d = t % 10;
			t /= 10;
			int p = d;
			int j = 1;
			while (j<z)
			{
				p *= d;
				j++;
			}
			sum += p;
		}
		while (t>0);
		if (sum==c)
		{
			printf("%d\n", c);
		}
		c++;
	}
	return 0;
}