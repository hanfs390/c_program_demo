#include <stdio.h>

int main()
{
	float a = 2325254.234;
	printf("%f  %e\n", a, a);

	double b = -3.14e+45;
	printf("%lf  %e\n", b, b);
	
	double c = -3.14e-45;
	printf("%lf  %e\n", c, c);
	
	return 0;
}
