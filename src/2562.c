#include <stdio.h>

int main(void)
{
	int num[9];
	int max, maxIndex=0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
		if (i == 0)
			max = num[i];

		if (max < num[i])
		{
			max = num[i];
			maxIndex = i;
		}
	}

	printf("%d\n%d", max, maxIndex+1);
	return 0;
}
