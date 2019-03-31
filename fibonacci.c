#include <stdio.h>

#define N 10
int main(int argc, const char *argv[])
{
	int a[N];
	int i;
	a[0] = a[1] = 1;
	for(i = 2; i < N; i++){
		a[i] = a[i-1]+a[i-2];
	}

	for(i = N-1; i >= 0; i--){
		printf("%d ", a[i]);
	}

	puts("");
	return 0;
}
