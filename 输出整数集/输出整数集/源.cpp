/*����һ��������6����������������������ĸ�����ɵĲ��ظ������ļ�*/
#include<stdio.h>
int  main()
{
	int a, b, c, d,e;
	printf("������һ������");
	scanf_s("%d",&a);
	b = a;
	c = a;
	d = a;
	e = 0;
	for (b=a; b < a + 4; b++) {
		for (c=a; c < a + 4; c++) {
			for (d=a; d < a + 4; d++) {
				if (b != c) {
					if (b != d) {
						if (c != d) {
							e++;
							printf("%d%d%d", b, c, d);
							printf(" ");
							if (e == 6) {
								printf("\n");
								e = 0;
							}
						}
					}
				}
			}
		}
	}

	return 0;
}