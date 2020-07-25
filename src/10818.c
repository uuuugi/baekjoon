#include <stdio.h>

int main(void)
{
	int num[1000000];

	int size, max= -1000001, min= 1000001;

	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &num[i]);

		if (max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}

	printf("%d %d", min, max);

	return 0;
}
