#include <stdio.h>

int main()
{
	//参数为字符
	putchar('a');
	//printf("\n");
	putchar('\n');

	//参数是ascii值,注意：在输入ascii时，必须时ascii表范围之内的
	putchar(100);
	//putchar(1000);
	putchar(10);

	//参数为变量
	char a = 'f';
	putchar(a);
	putchar(10);

	int b = 55;
	putchar(b);
	putchar(10);

	//返回值
	int c = putchar(108);
	putchar(10);
	printf("%d %c\n", c, c);

	return 0;
}
