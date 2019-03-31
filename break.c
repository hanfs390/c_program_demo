#include <stdio.h>


int fun(){
	
	printf("hello world!\n");
	return 10;//给调用者返回一个结果
}

int main(int argc, const char *argv[])
{
	int i, j;


//	return 0;//return结束当前函数，程序运行到这里会结束掉，后面的代码将不会被执行 
	for(i = 0; i < 5; i++){
	
		for(j = 0; j < 5; j++){
			if(j==2){
				break;//结束的是内层的for循环
			}
			printf("i=%d,j=%d  ", i, j);
		}
		puts("");
	}

	int a = fun();
	printf("a=%d\n", a);
	return 0;
}


