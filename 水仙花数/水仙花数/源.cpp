#include<stdio.h>
int main()
{
	int a, b = 10, c=1,z;
	printf("������һ����(3��7֮��)�����ǽ����1�����λ��֮�������ˮ�ɻ�����");
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