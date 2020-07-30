#include <stdio.h>

int reverse(int a)
{
	int tmp1, tmp2, tmp3,reverse;

	tmp1 = a / 100;
	tmp2 = a % 100 / 10;
	tmp3 = a % 10;

	reverse = tmp3 * 100 + tmp2 * 10 + tmp1;
	return reverse;
}
int main(void)
{
	int A, B;

	scanf("%d%d", &A, &B);
	A = reverse(A);
	B = reverse(B);
	(A > B) ? printf("%d", A) : printf("%d", B);

	return 0;
}
