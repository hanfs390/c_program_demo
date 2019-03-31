#include <stdio.h>

int main(int argc, const char *argv[])
{
	char a;

	scanf("%c", &a);

	switch(a)
	{
	case '1':
		printf("1\n");
		break;
	case '2':
		printf("2\n");
		break;
	case '3':
		printf("3\n");
		break;
	default:
		printf("other\n");
	}

	return 0;
}
