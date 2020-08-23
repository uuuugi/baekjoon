#include <stdio.h>

int main(void)
{
	int t,n;
	long long  fibo[41][2];

	fibo[0][0] = 1;
	fibo[0][1] = 0;
	fibo[1][0] = 0;
	fibo[1][1] = 1;

	for(int i=2; i<41; i++)
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
				fibo[i][j] = fibo[i - 2][j] + fibo[i - 1][j];
			else
				fibo[i][j] = fibo[i - 1][j - 1] + fibo[i - 1][j];
		}

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%lld %lld\n", fibo[n][0], fibo[n][1]);
	}
	return 0;
}
