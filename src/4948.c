//에라토스테네스의 체 를 이용한 해결
#include<stdio.h>

int main(void)
{
	int num[1000000] = { 0,1 };
	int n;

	for (int i = 2; i < 1000000; i++)// i~n 까지 i를 제외한 i의 배수들을 1로 바꾼다
		for (int j = 2; i * j < 1000000; j++)
			num[i * j] = 1;//뤂이 진행되고 나면 1000000칸의 배열에 소수가 기록되어있다.

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)//탈출부
			break;

		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++)// n< 수 <= 2n 범위안의 수를 카운트
		{
			if (!num[i])
				cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}
