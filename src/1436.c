#include <stdio.h>

int main(void)
{
	int num = 665;
	char Snum[100];
	int n, cnt = 0;

	scanf("%d", &n);

	while (1)
	{
		num ++;

		sprintf(Snum, "%d", num);
		for (int i = 1; Snum[i+1] != NULL; i++)
		{
			if (Snum[i - 1] == '6' && Snum[i] == '6' && Snum[i + 1] == '6')
			{
				cnt++;
				break;
			}
		}

		if (n == cnt)
			break;
	}

	printf("%d", num);
	return 0;
}
