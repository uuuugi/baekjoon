#include <stdio.h>

int main(void)
{
	int x, y, line;

	scanf("%d", &line);
	for (int i = 1; i <= line; i++)
	{
		scanf("%d %d", &x, &y);
		printf("Case #%d: %d + %d = %d\n", i, x, y, x + y);
	}
	return 0;
}
