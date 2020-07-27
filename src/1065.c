#include <stdio.h>

int main(void)
{
	
	int size, cnt = 0;
	scanf("%d", &size);
	for (int i = 1; i <= size; i++)
	{
		if (i < 100)
			cnt++;
		
		else
		{
			int tmp1, tmp2, tmp3;
			tmp1 = i / 100;
			tmp2 = i % 100/10;
			tmp3 = i % 10;

			if((tmp3-tmp2)==(tmp2-tmp1))
				cnt++;
		}
	}

	printf("%d", cnt);
	return 0;
}
