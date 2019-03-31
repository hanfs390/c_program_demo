#include <stdio.h>

int main()
{
	//代码跟踪调试
	//主要用于在判断得到具体位置
	//%s：字符串类型 %d：整型
	printf("%s ---> %s ---> %d\n", __FILE__, __func__, __LINE__);

	return 0;
}
