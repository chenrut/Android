#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a = rand();
	int b, c;
	int d = 0;
	a %= 100;
	printf("计算机已选好数字（一百以内）\n");
	do
	{
		printf("请输入数字：");
		scanf_s("%d", &b);
		if (b != a)
		{
			c = b > a;
			switch (c)
			{
			case 1:printf("大了\n"); break;
			default:printf("小了\n"); break;
			}
			d++; printf("已猜了%d次\n", d);
			if (d == 8) {
				printf("你输了！");
				break;
			}
		}
	} while (b!=a);
	if (b == a) {
		printf("你赢了！（总次数为：%d次）", d);
	}
	return 0;
}