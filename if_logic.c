#include <stdio.h>

int main()
{
	int a = 5, b = 6;
	int c;

	//短路原则：逻辑与中，如果第一个表达式不成立， 则第二个表达式不会执行
	c = a > 5 && b++;
	printf("c = %d, b = %d\n", c, b);

	//短路原则：逻辑或中，如果第一个表达式成立， 则第二个表达式不会执行
	c = a > 4 || b++;
	printf("c = %d, b = %d\n", c, b);


	return 0;
}
