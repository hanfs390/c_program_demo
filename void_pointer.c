#include <stdio.h>

int main(int argc, const char *argv[])
{
	void *p;
	int a = 5;
	char c = 'a';
	p = &a;
	printf("*p=%d\n", *(int *)p);
	p = &c;
	printf("*p=%c\n", *(char *)p);
	return 0;
}
