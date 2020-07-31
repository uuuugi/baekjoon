#include <stdio.h>

int main(void)
{
	char s[16];
	int alphabet[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int num = 0;
	scanf("%s", &s);

	for (int i = 0; s[i] != NULL; i++)
		num += alphabet[(s[i] - 'A')];

	printf("%d", num);
	return 0;
}
