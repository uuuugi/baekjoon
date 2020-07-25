#include <stdio.h>

int main(void)
{
	int line;
	scanf("%d", &line);

	for (int i = 0; i < line; i++)
	{
		for (int j = line-1; j > i; j--)
			printf(" ");
		
		for (int k = 0; k <=i; k++)
			printf("*");

		if(i!=line-1)
		printf("\n");
	}
	return 0;
}
