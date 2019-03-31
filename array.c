#include <stdio.h>

int main(int argc, const char *argv[])
{
	//定义了一个整型数组，里面存储10个整型数字
	//a是数组名,数组中的元素都有一个编号，这个编号时从0开始
	//这个编号叫做这个元素的下标
	//数组中的各个元素在计算机的内存中是连续存储的
	int a[10] = {5, 4, 3, 3, 5, 6, 0, 8, 9, 0};
	printf("%p\n", &a[0]);//:访问数组中的元素通过:数组名[下标]
	printf("%p\n", &a[1]);
	printf("%p\n", &a[2]);
	printf("%p\n", &a[3]);
	return 0;

}
