#include <stdio.h>

int main(void)
{
	long n, tmp = 1;
	scanf("%d", &n);
	int i=1, cnt = 1;

	while (1)
	{
		if (tmp < n)
			tmp += 6 * i++;
		else
			break;

		cnt++;
	}

	printf("%d", cnt);
	return 0;
}
