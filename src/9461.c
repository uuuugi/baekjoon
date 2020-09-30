#include <stdio.h>

#define SIZE 101

int main(void)
{
    int t, n;
    long long list[SIZE];

    list[0] = 1, list[1] = 1, list[2] = 1;

    for (int i = 3; i < SIZE; i++)
        list[i] = list[i - 3] + list[i - 2];

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%lld\n", list[n - 1]);
    }

	return 0;
}
