#include<stdio.h>
typedef union {
	int a;
	int ch[sizeof(int)];
}CHI;
int main(int argc,char const *argv[]) {
	CHI chi;
	chi. a = 1234;
	int i;
	for ( i = 0; i < sizeof(int); i++)
	{
		printf("%02hhx", chi.ch[i]);
	}
	printf("\n");
	return 0;
}