#include <stdio.h>

int main(void)
{
	int result[10];
	int cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &result[i]);
		result[i] %= 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int check = 0;
		for (int j = 0; j < i; j++)
		{
			if (result[j] == result[i])//중복이 있다면 check 값에 변화가 있다.
				check++;
		}
		if (check == 0)//위의 loop에서 중복이 없을 경우 cnt값 증가
			cnt++;
	}

	printf("%d",cnt);
	return 0;
}
