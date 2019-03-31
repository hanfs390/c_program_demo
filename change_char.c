#include <stdio.h>

int main()
{
	char a = 'F';
	printf("%c %d\n", a, a);

	char b = 'a' - 32;
	printf("%c %d\n", b, b);

	char c = 'Z' - 'P';
	printf("%c %d\n", c, c);

	char d = '9';
	printf("%c %d\n", d, d);

	char e = 97;
	printf("%c %d\n", e, e);

	char f = ' ';
	printf("%c %d\n", f, f);

	return 0;
}
