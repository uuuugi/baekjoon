#include <stdio.h>

#define SIZE 1000001

int main(void)
{
	int n;
	int list[SIZE];
	list[1] = 1, list[2] = 2;

	scanf("%d", &n);

	for (int i = 3; i <= n; i++)
	{
		list[i] = list[i - 2] + list[i - 1];
		list[i] %= 15746;
	}
	printf("%d", list[n]);

	return 0;
}
