#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;	
	for(i = 0; i < 10; i++){
		if(i == 5){
			continue;//结束本次循环，直接进入下次循环
		}
		printf("%d ", i);
	}

	putchar('\n');

	return 0;
}
