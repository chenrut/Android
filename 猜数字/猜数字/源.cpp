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
	printf("�������ѡ�����֣�һ�����ڣ�\n");
	do
	{
		printf("���������֣�");
		scanf_s("%d", &b);
		if (b != a)
		{
			c = b > a;
			switch (c)
			{
			case 1:printf("����\n"); break;
			default:printf("С��\n"); break;
			}
			d++; printf("�Ѳ���%d��\n", d);
			if (d == 8) {
				printf("�����ˣ�");
				break;
			}
		}
	} while (b!=a);
	if (b == a) {
		printf("��Ӯ�ˣ����ܴ���Ϊ��%d�Σ�", d);
	}
	return 0;
}