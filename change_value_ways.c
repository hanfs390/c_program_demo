#include <stdio.h>

//实现两个值的交换

int main()
{
	int a = 5, b = 6;

	printf("a = %d, b = %d\n", a, b);
#if 1
	//方法一：使用中间变量
	int c;
	c = a;
	a = b;
	b = c;
	printf("a = %d, b = %d\n", a, b);
#endif

#if 0
	//方法二：不引入中间变量
	a = a + b; //11
	b = a - b; //11 - 6 = 5
	a = a - b; //11 - 5 = 6;
	printf("a = %d, b = %d\n", a, b);
#endif

#if 0
	//方法三：使用位操作
	a ^= b;
	b ^= a;
	a ^= b;
	printf("a = %d, b = %d\n", a, b);
#endif

	return 0;
}
