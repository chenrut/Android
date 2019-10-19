#include<stdio.h>
int main()
{
	int xiaoshi1, fenzhong1, xiaoshi2, fenzhong2 ;

	scanf_s("%d %d %d %d", &xiaoshi1, &fenzhong1, &xiaoshi2, &fenzhong2);
	int ih = xiaoshi2 - xiaoshi1;
	int im = fenzhong2 - fenzhong1;
	if (im < 0) {
		im = 60 + im;
		ih--;
	}
	printf("时间差是%d小时%d分", ih, im);
	return 0;
}