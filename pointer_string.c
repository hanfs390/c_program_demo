#include <stdio.h>

int main(int argc, const char *argv[])
{
	char *p;
	char c = 'a';
	p = &c;
	printf("c = %c\n", c);
	printf("*p = %c\n", *p);

	//将字符串"helloword"存入字符数组中
	char ch[10] = "helloworld";
	//将字符串的首地址赋值给q,如果这样的话，不可以通过指针p去更改这个字符串的值,但是p的值可以更改
	char *q = "hellofarsight";
	printf("%s\n", q);
	printf("*q=%c\n", *q);
	//*q = 'a';错误
	q = "nihao";//可以
	printf("%s\n", q);


	return 0;
}
