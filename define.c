#include <stdio.h>

//宏定义一般大写
#define N 32
#define MAX 128
#define INT int

int main()
{
	int a = N + MAX;

	printf("a = %d\n", a);

	INT b = 10;
	printf("b = %d\n", b);

	return 0;
}
