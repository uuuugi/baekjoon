#include <stdio.h>

int main(void)
{
	long t, x, y;

	scanf("%ld", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d,%d", &x, &y);
		printf("%d\n", x + y);
	}
	return 0;
}
