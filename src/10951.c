#include <stdio.h>

int main(void)
{
	int x, y;
	
	while (scanf("%d%d",&x,&y)!=EOF) 
	{
		printf("%d\n", x + y);
	}
	return 0;
}
