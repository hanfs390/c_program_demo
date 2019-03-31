#include <stdio.h>

void fun1(int i)
{
	//栈区申请的空间会随着代码段的结束而释放空间
	int num = 0;

	num = num + i;

	printf("num = %d\n", num);

}

void fun2(int i)
{
	//static修饰的变量在静态区，会保留之前的数据
	static int num;

	num = num + i;

	printf("num = %d\n", num);
}

int main()
{
	int i = 10;

	fun1(i);
	fun1(i);
	fun1(i);

	printf("**************\n");

	fun2(i);
	fun2(i);
	fun2(i);

	return 0;
}
