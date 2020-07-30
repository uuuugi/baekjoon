#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000000];
	int word_cnt = 0,i;

	gets(word);

	for (i = 1; word[i] != NULL; i++)
	{
		if (word[i] == ' ')
			word_cnt++;
	}
	if (word[--i] == ' ')
		word_cnt--;

	if (word != NULL)
		printf("%d", word_cnt + 1);
	else
		printf("%d", word_cnt);
	return 0;
}
