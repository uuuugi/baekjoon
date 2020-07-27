#include <stdio.h>

int main(void)
{
	int size;
	char OX[80];
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		int score = 0;
		scanf("%s", &OX);
		int sum = 0, cnt = 0;

		for (int j = 0; OX[j] != NULL; j++)
		{
			if (OX[j] == 'X')
			{
				int sum = 0;
				for (int k = 1; k <= cnt; k++)
					sum += k;

				cnt = 0;
				score += sum;
				continue;
			}
			cnt++;
		}

		for (int k = 1; k <= cnt; k++)// 위의 LOOP이 끝났을때 cnt만큼 loop을 돌려 값을 더해줌 
			sum += k;
		score += sum;

		printf("%d\n", score);
	}
	return 0;
}
