#include<stdio.h>

int main()
{
int a, b, c;
printf("������a\n");
scanf_s("%d",&a);
printf("������b\n");
scanf_s("%d",&b);
printf("��ȷ�ϣ�a=%d,b=%d\n", a, b);
c = a;
a = b;
b = c;
printf("�ѽ���λ�ã�a=%d,b=%d",a,b);
return 0;
}
