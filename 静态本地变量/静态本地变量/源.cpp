#include<stdio.h>
int f(void);
int main() {
	f();
	f();
	f();
	return 0;
}
int f(void) {
	static int a = 1;
	printf("a=%d", a);
	a++;
	return a;
}