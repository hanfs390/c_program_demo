#include <stdio.h>

int main()
{
	//逗号运算符，最终的结果为最后一个式子的值
	int a = 5, b = 6, c;

	c = (a = a + b, b--, a = a + b, a++);
	printf("c = %d\n", c);

	return 0;
}
