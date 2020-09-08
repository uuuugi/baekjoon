#include <stdio.h>
#include <math.h>

void hanoi(int n, int A, int B, int C)
{
	if (n == 1)
		printf("%d %d\n", A, C);
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%d %d\n", A, C);
		hanoi(n - 1, B, A, C);
	}
}
int main(void)
{
	int n;

	scanf("%d", &n);

	printf("%d\n", (int)pow(2, n) - 1);  // 메르센 수 = 2의 거듭제곱에서 1이 모자란 수

	hanoi(n, 1, 2, 3);

	return 0;
}
