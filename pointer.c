#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	int a = 10;
	//定义指针变量的时候，*仅仅表明后面定义的变量是一个指针变量，并没有其他任何运算意义
//	int *p;//表明定义了一个指针变量，这个指针变量指向一个整型数据
//	p = &a;
	int *p = &a;

	printf("p=%p\n", p);
	printf("&a=%p\n", &a);

	printf("a=%d\n", a);//直接访问
	printf("*p=%d\n", *p);//间接访问，*p中的这个*是一个运算符，表示这个指针所指向的变量的内容


	//*和&是同等优先级，但是结合性从右向左
	//&和*或为你逆运算
	printf("*&a=%d\n", *&a);
	return 0;
}
