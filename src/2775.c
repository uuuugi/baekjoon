#include <stdio.h>

int main(void)
{
	int t, k, n;
	int list[15][15];

	for (int i = 0; i < 15; i++)
	{
		list[i][1] = 1;
		list[0][i] = i;
	}

	for (int i = 1; i < 15; i++)
		for (int j = 2; j < 15; j++)
			list[i][j] = list[i - 1][j] + list[i][j - 1];
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", list[k][n]);
	}

	return 0;
}
