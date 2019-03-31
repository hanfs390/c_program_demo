#include <stdio.h>

int main(int argc, const char *argv[])
{
	//argc表示调用main函数时传递的参数个数
	//argv是一个指针数组，每个指针指向一个参数
	//给main函数传参是在执行./a.out后面添加上参数即可，多个参数之间用空格隔开，每个参数都当成一个字符串
	printf("argc = %d\n", argc);

	int i;
	/*
	char *p[4] = {"beijing", "shanghai", "guangzhou", "shenzhen"};
	for(i = 0; i < 4; i++){
		printf("%s\n", p[i]);
	}*/

	for(i = 0; i < argc; i++){
		printf("%s\n", argv[i]);
	}

	return 0;
}
