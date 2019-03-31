#include <stdio.h>


int add(int a, int b);
int min(int a, int b);
int callback(int a, int b, int(*p)(int a, int b));
int main(int argc, const char *argv[])
{
	
	int (*p)(int a, int b);//定义了一个函数指针，需要指向一个函数的入口
	p = add;//函数名就是函数的入口地址
	int ret = p(3, 5);
	printf("ret = %d\n", ret);
	p = min;
	ret = p(3, 5);
	printf("ret = %d\n", ret);


	printf("%d\n", callback(10, 5, add));
	return 0;
}

int add(int a, int b){
	return a+b;
}

int min(int a, int b){
	return a-b;
}

int callback(int a, int b, int (*p)(int a, int b)){
	return  p(a, b);
}

