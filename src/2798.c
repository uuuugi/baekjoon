#include <stdio.h>
// 브루트포스의 의미를 검색해 볼것!
int main(void)
{
    int n, m, sum, max = 0;
    int list[101];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            for (int k = j + 1; k < n; k++)
            {
                sum = list[i] + list[j] + list[k];
                if (sum > max && sum <= m)
                    max = sum;
            }
    
    printf("%d", max);
    return 0;
}
