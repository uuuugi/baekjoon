#include <stdio.h>

#define PI 3.14159265359

int main(void)
{
	double r;
	
	scanf("%lf", &r);

	printf("%.6lf\n", r * r * PI);
	printf("%.6lf", 2 * r * r);

	return 0;
}
