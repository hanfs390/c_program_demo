#include <stdio.h>



//我们定义了一个功能，用来打印“hello boy”，用函数来体现
void fun(){
	printf("hello boy\n");
}

int main(int argc, const char *argv[])
{
	fun();//去调用fun函数

	fun();//fun函数可以被多次调用


	fun();
	return 0;
}
