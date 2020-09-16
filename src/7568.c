#include <stdio.h>

typedef struct {
	int w, h, x;
}P;
int main(void)
{
	P p[201];
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &p[i].w, &p[i].h);
		p[i].x = 1;
	}

	for(int i=0; i<n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (p[i].w < p[j].w && p[i].h < p[j].h)
				p[i].x++;
		}
	
	for (int i = 0; i < n; i++)
		printf("%d ", p[i].x);

	return 0;
}
