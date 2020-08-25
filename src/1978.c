#include <stdio.h>

int main(void)
{
	int t,x;
	int tmpcnt,cnt = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &x);
		if (x == 1)
			continue;

		if (x == 2|| x==3)
		{
			cnt++;
			continue;
		}

		tmpcnt = 0;
		for (int j = 2; j < x ; j++)
		{
			if (x % j == 0)
				tmpcnt++;
			if (tmpcnt > 2)
				break;
		}
		if (tmpcnt == 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
