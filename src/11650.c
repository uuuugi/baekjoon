#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int x, y;
}point;

int compare(void* a, void* b) {
    point* A = (point*)a;
    point* B = (point*)b;

    if (A->x > B->x)
        return 1;
    else if (A->x == B->x)
        return A->y - B->y;
    else if (A->x < B->x)
        return -1;
    else
        return 0;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    point* list = malloc(sizeof(point) * n);

    for (int i = 0; i < n; i++)
        scanf("%d%d", &list[i].x, &list[i].y);

    qsort(list, n, sizeof(point), compare);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", list[i].x, list[i].y);

    free(list);
	return 0;
}
