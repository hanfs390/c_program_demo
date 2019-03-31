#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[10] = {4, 3, 9, 0, 8, 1, 7, 3, 2, 0};

	int i;
	int *p = a;
	//a表示数组首元素的地址，是一个地址常量
	//p是指针变量
	printf("a[0]=%d\n", *a);
	printf("a[1]=%d\n", *(a+1));
	printf("a[2]=%d\n", *(a+2));
	for(i = 0; i < 10; i++){
		//printf("%d ", a[i]);
		//printf("%d ", *(a+i));
		//printf("%d ", *(p+i));
		//printf("%d ", p[i]);
		//printf("%d ", *p++);
		printf("%d ", *p);
		p++;
	}
	//a[i] <=> *(a+i) <=> *(p+i) <=> p[i]

	puts("");

	return 0;
}
