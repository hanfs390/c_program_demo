#include <stdio.h>

void fun(int *p);
int main(int argc, const char *argv[])
{
	
	int a = 10;
	printf("a=%d\n", a);
	fun(&a);
	printf("a=%d\n", a);


	return 0;
}


void fun(int *p){
	*p = 20;
}



