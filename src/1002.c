//두 원의 위치관계를 이용하여 풀어야 하는 문제

#include <stdio.h>

int main(void)
{
	int x1, x2, y1, y2, r1, r2;
	int t,d,sum,sub;

	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

		//제곱근이 아닌 제곱수를 이용하여 비교하였다.
		d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);//두 원의 중심사이의 거리
		sum = (r1 + r2) * (r1 + r2);
		sub = (r1 - r2) * (r1 - r2);

		if (d == 0) {
			if (sub == 0)
				printf("-1\n");
			else
				printf("0\n");
		}
		else if (sub < d && d < sum)
			printf("2\n");
		else if (sum == d || sub == d)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
