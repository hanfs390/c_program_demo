#include <stdio.h>
#include <string.h>

#define N 128
int main(int argc, const char *argv[])
{
	char s1[N] = "hello";
	char s2[N] = "farsight";

	//把s2字符串链接到s1字符串后面，一块存入s1数组中
	strcat(s1, s2);

	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	return 0;
}
