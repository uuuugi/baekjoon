//퀵소트 사용
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main(void)
{
	int n, list[1000001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &list[i]);

	qsort(list, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
		printf("%d\n", list[i]);

	return 0;
}
