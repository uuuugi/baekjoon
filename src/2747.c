#include <stdio.h>

int main(void)
{
	int fibo[46];
	int x;

	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i < 46; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	scanf("%d", &x);
	printf("%d", fibo[x]);
	return 0;
}
