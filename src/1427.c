#include <stdio.h> 
#include <stdlib.h>

#define SIZE 12

int compare(void* a, void* b) 
{
	return *(char*)b - *(char*)a;
}

int main()
{ 
	int n, n_size=0;
	char c_num[SIZE];

	scanf("%d", &n);

	sprintf(c_num, "%d", n);

	for (int i = 0; c_num[i] != NULL; i++)
		n_size++;

	qsort(c_num, n_size, sizeof(char), compare);

	printf(c_num);

	return 0;
}
