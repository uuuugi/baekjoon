#include <stdio.h>

int main(void)
{
	int a, b, v, day;
	scanf("%d%d%d", &a, &b, &v);

	// v-b / a-b 가 딱맞게 나눠 떨어지지 않으면 몫에+1 한것이 정답이나, 비교식을 넣기보단 -1과 +1을 양쪽에 넣어주었다.
	day = (v - b - 1) / (a - b)+1;
	printf("%d", day);

	return 0;
}
