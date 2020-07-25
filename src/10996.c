#include <stdio.h>

int main(void)
{
	int line;
	scanf("%d", &line);

	for (int i = 0; i < line*2; i++)
	{
		for (int j = 0; j < line; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
					printf("*");
				else
					printf(" ");
			}
			else
			{
				if (j % 2 == 0)
					printf(" ");
				else
					printf("*");
			}
		}
		if (line == 1)
			continue;
		if(i !=line*2-1)
		printf("\n");
	}

	return 0;
}
