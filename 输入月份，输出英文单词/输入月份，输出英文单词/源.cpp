#include<stdio.h>
int main() {
	char *a[] = {(char*)"january",(char*)"february", (char*)"march", (char*)"april", (char*)"may", (char*)"june", (char*)"july", (char*)"august", (char*)"september", (char*)"october", (char*)"november", (char*)"december" };
	int i;
	printf("请输入月份：");
		scanf_s("%d", &i);
		printf("此月份的单词为%s", a[--i]);
		return 0;
}