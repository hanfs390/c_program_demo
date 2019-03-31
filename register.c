#include <stdio.h>

int main()
{
	//变量在内存当中申请空间
	//int i, j;

	//在寄存器当中申请空间，但是不一定能够申请成功,如果不成功，则根auto一样
	register int i, j;

	for(i = 0; i < 1000; i++)
	{
		for(j = 0; j < 1000; j++)
		{
		
		}
	}

	return 0;
}
