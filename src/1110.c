#include <stdio.h>

int main(void)
{
	int N, x, y, z, cnt=0;
	scanf("%d", &N);

	if (N < 10)//N 이 10 보다 작다면 앞에 0붙이기
		x = 0+N;
	else
		x = N;

	while (1)
	{
		y = x % 10;//주어진 수의 가장 오른쪽 자리
		
		z= (x / 10) + (x % 10);
		z %= 10;// 더한 수의 가장 오른쪽 자리

		x = (y * 10) + z;//두개 더함

		cnt++;

		if (N == x)
			break;
	}
	 
	printf("%d", cnt);

	return 0;
}
