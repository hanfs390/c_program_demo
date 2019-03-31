#include <stdio.h>


int add(int a, int b);
int min(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main(int argc, const char *argv[])
{
	int (*p[4])(int a, int b);//定义了一个函数指针数组，其中有四个函数指针
	p[0] = add;
	p[1] = min;
	p[2] = mul;
	p[3] = div;

	int i;
	for(i = 0; i < 4; i++){
		printf("%d\n", p[i](10, 5));
	}

	return 0;
}


int add(int a, int b){
	return a+b;
}

int min(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int div(int a, int b){
	return a/b;
}
