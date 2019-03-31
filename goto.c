#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 1;
	int sum = 0;

#if 0
	sum += i;
	i++;
	sum += i;
	i++;
	sum += i;
	i++;
	...
	i++;
	sum += i;
#endif

	//所有的循环都必须有结束条件
	//goto语句可能会使得程序变得混乱，所以尽量少用
next:
	if(i <= 100)
	{
		sum += i;
		i++;
		goto next;
	}

	printf("sum = %d\n", sum);
	
	return 0;
}
