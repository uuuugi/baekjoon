#include <stdio.h>

int main(void)
{
	int num[3];
	int max=0 , secondMax=0;
	int maxIndex;

	for (int i = 0; i < 3; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < 3; i++)
		if (max < num[i])
		{
			max = num[i];
			maxIndex = i;//가장 큰 수의 인덱스 저장
		}

	for (int i = 0; i < 3; i++)
	{
		if (i == maxIndex)//가장 큰 수의 인덱스를 제외하고 비교를 하여 두번째로 큰 수 찾기
			continue;

		if (secondMax < num[i])
			secondMax = num[i];
	}

	printf("%d", secondMax);
	return 0;
}
