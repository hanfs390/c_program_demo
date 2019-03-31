#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	int a[2][3];
	//二位数组在内存中是连续存储的，按行序优先的原则
	printf("&a[0][0] = %p\n", &a[0][0]);
	printf("&a[0][1] = %p\n", &a[0][1]);
	printf("&a[0][2] = %p\n", &a[0][2]);
	printf("&a[1][0] = %p\n", &a[1][0]);
	printf("&a[1][1] = %p\n", &a[1][1]);
	printf("&a[1][2] = %p\n", &a[1][2]);


	printf("a = %p\n", a);
	printf("a[0] = %p\n", a[0]);
	printf("&a[0][0] = %p\n", &a[0][0]);

	return 0;
}
