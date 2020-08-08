#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int num = 0, i = 1;
	int num1, num2;

	for (i = 1; num < n; i++)
		num += i;

	if (n == 1)
		printf("1");

	else if (i % 2 == 0)
	{
		num1 = 1;
		num2 = i-1;
		for (int j = 0; j < num - n; j++)
		{
			num1++;
			num2--;
		}
		printf("%d/%d", num1, num2);
	}
	else
	{
		num1 = i-1;
		num2 = 1;
		for (int j = 0; j < num - n; j++)
		{
			num1--;
			num2++;
		}
		printf("%d/%d", num1, num2);
	}
	return 0;
}
