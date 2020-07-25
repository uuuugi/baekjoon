#include <stdio.h>

int main(void)
{
	int line;

	scanf("%d", &line);

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");

		for (int j = (line * 2) - 1; j > i*2; j--)
			printf("*");

		printf("\n");
	}
	for (int i = line-2; i >= 0; i--)
	{
		for (int j =i ; j>0; j--)
			printf(" ");

		for(int j=line*2-1; j>i+i; j--)
			printf("*");

		printf("\n");
	}
	return 0;
}
