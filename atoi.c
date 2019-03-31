#include <stdio.h>
#include <stdlib.h>



int main(int argc, const char *argv[])
{
	char s[32];
	scanf("%[^\n]", s);
	getchar();
	int ret = atoi(s);//把数字型的字符串转换成整型数据
	printf("%d\n", ret);
	return 0;
}
