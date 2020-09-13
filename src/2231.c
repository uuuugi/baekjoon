#include <stdio.h>

int main(void)
{
	int n, min, sum, cnt = 1, ans = 0;
	char chN[10];

	scanf("%d", &n);

	int tmp = n;
	while (tmp /= 10)
		cnt++;

	min = n - cnt * 9;

	for (int i = min; i <= n; i++)
	{
		sum = i;
		sprintf(chN, "%d", i);

		for (int j = 0; chN[j]!=NULL; j++)
			sum += chN[j] - '0';

		if (sum == n)
		{
			ans = i;
			break;
		}
	}

	printf("%d", ans);
	return 0;
}
