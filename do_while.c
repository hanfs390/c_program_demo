#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;

#if 0
	while(i < 0)
	{
		printf("hello world\n");
		i++;
	}
#endif

	do{
		printf("hello world\n");
		i++;
	}while(i < 0);

	return 0;
}
