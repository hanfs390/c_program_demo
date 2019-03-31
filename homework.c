#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, j;

	for(i = 0; i < 10; i++){
		char c = 'J';
		for(j = 0; j <= i; j++){
			printf("%c", c);
			c = c - 1;
		}


		puts("");

	}

	return 0;
}
