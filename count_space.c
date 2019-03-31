#include <stdio.h>

#define N 128
int main(int argc, const char *argv[])
{
	char s1[N];

	scanf("%[^\n]", s1);

	int i = 0;
	int number = 0;
	//思路:遍历这个字符串，然后判断每个字符是否等于空格，如果等于空格，定义一个变量，记录空格的个数，直到遇到'\0'结束
	while(s1[i] != '\0'){
		if(s1[i] == ' '){
			number++;
		}
		i++;
	}

	printf("number:%d\n", number);
	return 0;
}
