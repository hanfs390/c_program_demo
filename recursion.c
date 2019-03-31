#include <stdio.h>

int main(int argc, const char *argv[])
{
	factorial(5);
	return 0;
}


int factorial(int n){

	//递归的中止条件：递归函数一定需要有中止条件
	//我们这个求n!的时候，中止条件就是当n=1的时候
	if(n == 1){
		return 1;
	}
	return n*factorial(n-1);
}
