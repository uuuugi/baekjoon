#include <stdio.h>

int main(void)
{
	int m, n;
	int sum = 0, min=0;

	scanf("%d%d", &m,&n);

	if (m == 1)
		m += 1;

	for (int i = n; i >= m; i--)
	{
		int check = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				check++;
		}
		if (check == 0)
		{
			sum += i;
			min = i;
		}
	}
	if (sum == 0)
		printf("-1");
	else
	printf("%d\n%d", sum, min);

	return 0;
}
