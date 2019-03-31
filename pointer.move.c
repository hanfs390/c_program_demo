#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 10;
	char c = 'a';
	int *p = &a;
	char *q = &c;


	printf("**************************算数运算*************************\n");
	printf("p=%p\n", p);
	printf("q=%p\n", q);

	//指针+和-运算，就是地址的移动，具体移动多少个字节呢？跟这个指针的数据类型有关
	printf("p+1=%p\n", p+1);
	printf("q+1=%p\n", q+1);

	printf("p++=%p\n", p++);
	printf("q++=%p\n", q++);


	printf("p=%p\n", p);
	printf("q=%p\n", q);


	printf("**************************赋值运算******************************\n");

	int m = 10;
	int *x;
	x = &m;


	int *y;
	y = x;//x和y同时指向m
	printf("x=%p\n", x);
	printf("y=%p\n", y);
	printf("*x=%d\n", *x);
	printf("*y=%d\n", *y);


	int arr[10] = {4, 3, 5, 7};
	y = arr;//y=&arr[0];
	printf("*y=%d\n", *y);

	y++;
	printf("*y=%d\n", *y);


	int *pa = &arr[0];
	int *pb = &arr[3];

	printf("pb-pa=%d\n", pb-pa);//pb和pa之间相隔数据的个数




	return 0;
}
