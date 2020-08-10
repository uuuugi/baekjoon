#include <stdio.h>

int main(void)
{
	int h, w, n, size;
	
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d%d%d", &h, &w, &n);

		if (n % h == 0)
			printf("%d%02d", h, n / h);
		
		else
			printf("%d%02d", (n % h), (n/h)+1);

		if (i != (size - 1))
			printf("\n");
	}
	return 0;
}
