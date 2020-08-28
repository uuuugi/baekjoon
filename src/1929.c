//<에라토스테네스의 체>를  이용한 문제풀이

#include<stdio.h>

int main(void) 
{
	int num[1000001] = { 0,1 };
	int m, n;
	scanf("%d%d", &m, &n);
	
	for (int i = 2; i <= n; i++)// i~n 까지 i를 제외한 i의 배수들을 1로 바꾼다
		for (int j = 2; i * j <= n; j++)
			num[i * j] = 1;
	
	for (int i = m; i <= n; i++)//값이 없는 배열의 인덱스를 출력
		if (!num[i]) 
			printf("%d\n", i);

	return 0;
}
