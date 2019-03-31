#include <stdio.h>

int main()
{
	char a;
	int b;
	short c;
	long d;
	long long e;
	float f;
	double g;

	printf("sizeof(char) = %d %d\n", sizeof(char), sizeof(a));
	printf("sizeof(int) = %d %d\n", sizeof(int), sizeof(b));
	printf("sizeof(short) = %d %d\n", sizeof(short), sizeof(c));
	printf("sizeof(long) = %d %d\n", sizeof(long), sizeof(d));
	printf("sizeof(long long) = %d %d\n", sizeof(long long), sizeof(e));
	printf("sizeof(float) = %d %d\n", sizeof(float), sizeof(f));
	printf("sizeof(double) = %d %d\n", sizeof(double), sizeof(g));

	return 0;
}
