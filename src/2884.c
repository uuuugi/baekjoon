#include <stdio.h>

int main(void)
{
	int h = 0, m = 0;
	scanf("%d%d", &h, &m);

	m -= 45;

	if (m < 0)
	{
		h--;
		m = 60+m;
	}

	if (h == -1)
		h = 23;

	printf("%d %d", h, m);

	return 0;
}
