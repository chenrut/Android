#include<stdio.h>
int main() {
	char *a[] = {(char*)"january",(char*)"february", (char*)"march", (char*)"april", (char*)"may", (char*)"june", (char*)"july", (char*)"august", (char*)"september", (char*)"october", (char*)"november", (char*)"december" };
	int i;
	printf("�������·ݣ�");
		scanf_s("%d", &i);
		printf("���·ݵĵ���Ϊ%s", a[--i]);
		return 0;
}