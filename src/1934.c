#include <stdio.h>

int get_gcd(int a, int b)
{
	return b ? (get_gcd(b, a % b)) : a;
}

int get_lcm(int a, int b, int c)
{
	return a * b / c;
}

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int x,y,gcd;
		scanf("%d %d", &x, &y);
		gcd = get_gcd(x, y);

		printf("%d\n", get_lcm(x, y, gcd));
	}

	return 0;
}
