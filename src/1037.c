#include <stdio.h> 
#include <stdlib.h>

#define SIZE 51

int compare(void* a, void* b) {
	return *(int*)a - *(int*)b;
}
int main()
{ 
	int n, result, list[SIZE];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &list[i]);

	qsort(list, n, sizeof(int), compare);

	result = list[0] * list[n - 1];

	printf("%d",result);

	return 0;
}
