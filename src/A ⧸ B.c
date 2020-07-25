#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	double c;
	scanf("%d%d", &a, &b);
	c = a / (double)b;
	printf("%.9lf",c);

	return 0;
}
