#include <stdio.h>

int main(void)
{
	char word[1000000];
	int alphabet[26] = { 0 };
	
	scanf("%s", &word);

	for (int i = 0; word[i] != NULL; i++)
	{
		if (word[i] <= 'Z')
			alphabet[(word[i] - 'A')]++;
		else if(word[i]>='a')
			alphabet[(word[i] - 'a')]++;
	}

	int maxIndex=0, max= alphabet[0];

	for (int i = 1; i < 26; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			maxIndex = i;
		}
	}

	for (int i = 0; i < 25; i++)
	{
		if (i == maxIndex)
			continue;
		
		if (alphabet[i] == alphabet[maxIndex])
		{
			printf("?");
			return 0;
		}

	}

	printf("%c", maxIndex + 'A');

	return 0;
}
