//에라토스테네스의 체 를 이용한 해결
#include<stdio.h>

int main(void)
{
	int t, n;
	int num[10001] = { 0 };
	
	for (int i = 2; i <=10000 ; i++) // 배열에 소수 저장
		for (int j = 2; i * j <= 10000; j++)
			num[i * j] = 1;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);

		for (int j = n / 2; j > 0; j--) // 골드바흐의 파티션 찾아서 출력
			if (!num[j] && !num[n - j])
			{
				printf("%d %d\n", j, n - j);
				break;
			}
		
	}
	return 0;
}
