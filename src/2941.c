#include <stdio.h>

int main(void)
{
	char* croWord[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	char s[101];
	int cnt = 0;
	int i;
	scanf("%s", s);

	for (int i = 0; s[i] != NULL; i++)
	{
		if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
		{
			cnt++;
			i += 2;
			continue;
		}
		if (s[i] == '=' || s[i]== '-')
			continue;

		if(i!=0)
			if (s[i] == 'j')
				if (s[i - 1] == 'l' || s[i - 1] == 'n')
					continue;

		cnt++;
	}

	printf("%d", cnt);
	return 0;
}
