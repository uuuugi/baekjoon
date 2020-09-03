#include<stdio.h>

int main(void)
{
	int x, y, w, h;
	int min;

	scanf("%d%d%d%d", &x, &y, &w, &h);

	min = x - 0;
	if (min > y - 0)
		min = y - 0;
	if (min > w - x)
		min = w - x;
	if (min > h - y)
		min = h - y;

	printf("%d", min);

	return 0;
}
