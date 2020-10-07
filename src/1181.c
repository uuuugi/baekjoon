#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20001

int compare(const void* a, const void* b)
{
	int a_size = strlen((char*)a);
	int b_size = strlen((char*)b);

	if (a_size == b_size)
	{
		return strcmp((char*)a, (char*)b);
	}
	else
		return a_size - b_size;
}

int main(void)
{
	int n;
	char list[SIZE][51];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s", &list[i]);

	qsort(list, n, sizeof(char)*51, compare);

	for (int i = 0; i < n; i++)
	{
		if (!strcmp(list[i], list[i + 1]))
			continue;
		else
			printf("%s\n", list[i]);
	}

	return 0;
}
