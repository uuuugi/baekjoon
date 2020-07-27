#include <stdio.h>

int d(int n)
{
	
	if (n < 10)
		return 2 * n;
	else if (n >= 10 && n < 99)
	{
		int tmp1, tmp2;
		tmp1 = n / 10;
		tmp2 = n % 10;

		return n + tmp1 + tmp2;
	}
	else if (n >= 100 && n < 999)
	{
		int tmp1, tmp2, tmp3;
		tmp1 = n / 100;
		tmp2 = (n % 100) / 10;
		tmp3 = n % 10;

		return n + tmp1 + tmp2 + tmp3;
	}
	else if (n >= 1000 && n < 9999)
	{
		int tmp1, tmp2, tmp3, tmp4;
		tmp1 = n / 1000;
		tmp2 = (n % 1000) / 100;
		tmp3 = (n % 100) / 10;
		tmp4 = n % 10;

		return n + tmp1 + tmp2 + tmp3 + tmp4;
	}
	else
		return 10001;
}

int main(void)
{
	int selfNum[100000] = { 0 };
	int result;

	for (int i = 1; i < 10000; i++)
	{
		result = d(i);
		selfNum[result] = 1;
	}

	for (int i = 1; i < 10000; i++)
	{
		if (selfNum[i] == 0)
		{
			printf("%d", i);
			if (i == 9993)
				continue;
			printf("\n");
		}
	}
	return 0;
}
