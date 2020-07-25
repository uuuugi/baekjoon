#include <stdio.h>

int main(void)
{
	int line;
	scanf("%d", &line);

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");

		if(i!=line-1)
		printf("\n");
	}
	return 0;
}
