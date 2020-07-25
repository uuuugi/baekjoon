#include <stdio.h>

int main(void)
{
	int num[10] = { 0 };
	int A, B, C,x;
	long result;

	scanf("%d%d%d", &A, &B, &C);
	result = A * B * C;
	
	int i = 10;
	while (result / i != 0)
	{
		x = result % i;
		x = x / (i / 10);

		if(i==10)
			x = result % i;

		num[x]++;
		i *= 10;
	}
	x = result / (i / 10);
	num[x]++;

	for (int i = 0; i < 10; i++)
		printf("%d\n", num[i]);
	return 0;
}
