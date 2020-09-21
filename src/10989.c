//카운팅 정렬
#include <stdio.h>

#define size 10001

int main(void)
{
	int n, num, cnt[size];

	scanf("%d", &n);

	for (int i = 0; i < size; i++)//초기화
		cnt[i] = 0;

	for (int i = 0; i < n; i++)//카운팅
	{
		scanf("%d", &num);
		cnt[num]++;
	}

	for (int i = 0; i < size; i++)//출력
	{
		if (cnt[i] == 0)
			continue;

		for (int j = 0; j < cnt[i]; j++)
			printf("%d\n", i);
	}

	return 0;
}
