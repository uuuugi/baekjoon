#include <stdio.h>
#include <stdlib.h>

#define SIZE 100001

typedef struct {
	int x, y;
}point;

int compare(void* a, void* b)
{
	point* A = (point*)a;
	point* B = (point*)b;

	if (A->y > B->y)
		return 1;
	else if (A->y == B->y)
		return A->x - B->x;
	else if (A->y < B->y)
		return -1;
	else
		return 0;
}

int main(void)
{
	int n;
	point list[SIZE];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &list[i].x, &list[i].y);

	qsort(list, n, sizeof(point), compare);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", list[i].x, list[i].y);

	return 0;
}
