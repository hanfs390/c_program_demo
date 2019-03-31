#include <stdio.h>
#include <stdbool.h>

//逻辑类型
//注意：在c语言里面，本身没有bool类型，如果使用，需要添加头文件
int main()
{
	//bool类型，非0即为真
	bool a = 9;
	bool b = -0.000001;
	bool c = 0;

	printf("a = %d, b = %d\n", a, b);
	printf("c = %d\n", c);

	return 0;
}
