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
	int x, y, gcd;

	scanf("%d %d", &x, &y);
	gcd = get_gcd(x, y);

	printf("%d\n",gcd);
	printf("%d", get_lcm(x, y, gcd));
	return 0;
}
