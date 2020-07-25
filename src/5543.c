#include <stdio.h>

int main(void)
{
	int menu[5];
	int min,tmp;

	for (int i = 0; i < 5; i++)
		scanf("%d", &menu[i]);

	min = menu[0] + menu[3];

	for (int i = 0; i < 3; i++)
	{
		tmp = menu[i] + menu[3];
		if (tmp < min)
			min = tmp;
		tmp = menu[i] + menu[4];
		if (tmp < min)
			min = tmp;
	}
	printf("%d", min-50);

	return 0;
}
