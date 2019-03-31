#include <stdio.h> 
 
int main()
{
	char a;
	a = getchar();

	printf("%d %c\n", a, a);

	// 注意;在终端输入多个字符时，空格和回车也是字符，也会输入
	char b, c, d;
	b = getchar();
	c = getchar()
	d = getchar();

	printf("%c %c %c\n", b, c, d);

	return 0;
}
