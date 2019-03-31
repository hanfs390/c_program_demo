#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, j;
	//几行几列的形式都是for嵌套
	//外层for循环控制要打印多少行
	//内层for循环控制每列的形式
	for(i = 0; i < 6; i++){
		char c = 'F';
		//for循环控制打印_
		for(j = 0; j < i; j++){
			printf("_");
		}
		//for循环控制打印字母
		for(j = 0; j <= i; j++){
			printf("%c", c);
			c -= 1;
		}
		putchar('\n');
	}
	return 0;
}
