//http://st-lab.tistory.com/79
//설명 참조
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, y, t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &x, &y);
		int distance = y - x;
		int max = (int)sqrt(distance);

		if (max == sqrt(distance))
			printf("%d\n", 2 * max - 1);
		else if (distance <= max * max + max)
			printf("%d\n", 2 * max);
		else
			printf("%d\n", 2 * max + 1);
	}

	return 0;
}
