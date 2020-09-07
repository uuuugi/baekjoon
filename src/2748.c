#include <stdio.h>

int main(void)
{
	int n;
	long long fibo[91] = { 0 };

	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;

	scanf("%d", &n);

	for (int i = 3; i <= n; i++)
		fibo[i] = fibo[i - 2] + fibo[i - 1];

	printf("%lld", fibo[n]);

	return 0;
}
