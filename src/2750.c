#include <stdio.h>
//버블정렬
int main(void)
{
	int n;
	int list[1001];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &list[i]);

	for(int i=0; i<n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (list[i] > list[j])
			{
				int tmp;
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	for (int i = 0; i < n; i++)
		printf("%d\n", list[i]);

	return 0;
}
