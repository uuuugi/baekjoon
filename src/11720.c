#include <stdio.h>

int main(void)
{
	
	int size,sum=0;
	char num[101];
	scanf("%d", &size);
	scanf("%s", num);

	for (int i = 0; i < size; i++)
		sum += num[i]-'0';

	printf("%d", sum);
	return 0;
}
