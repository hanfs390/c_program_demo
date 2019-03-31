#include <stdio.h>


#define N 128
int main(int argc, const char *argv[])
{
	char s[N];
	scanf("%[^\n]", s);
	getchar();

	char *p = s;
	char *q = s;
	while(*q != '\0'){
		q++;
	}
	q--;//让指针p指向字符串最后一个字符
	while(p < q){
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
		p++;
		q--;
	}

	printf("%s\n", s);


	return 0;
}
