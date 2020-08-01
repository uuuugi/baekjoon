#include <stdio.h>

int main(void)
{
	int size,cnt=0;
	char word[101];

	scanf("%d", &size);

	for (int i = 0; i<size; i++)
	{
		char check[101];
		int checkIndex = 0;
		scanf("%s", &word);

		for (int j = 0; word[j] != NULL; j++)
			if (word[j] != word[j + 1])
				check[checkIndex++] = word[j];
		
		int overlap = 0;

		for (int j = 0; j < checkIndex; j++)
		{
			if (overlap == 1)
				break;
			for (int k = j+1; k < checkIndex; k++)
				if (check[k] == check[j])
				{
					overlap = 1;
					break;
				}
		}
		if (overlap == 0)
			cnt++;
	}
		printf("%d", cnt);
	return 0;
}
