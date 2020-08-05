#include <stdio.h>

long fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return fac(n - 1) * n;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%ld", fac(n));

	return 0;
}
