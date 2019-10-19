#include<stdio.h>

int main()
{
int a, b, c;
printf("请输入a\n");
scanf_s("%d",&a);
printf("请输入b\n");
scanf_s("%d",&b);
printf("已确认，a=%d,b=%d\n", a, b);
c = a;
a = b;
b = c;
printf("已交换位置，a=%d,b=%d",a,b);
return 0;
}
