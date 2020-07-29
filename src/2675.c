#include <stdio.h>

int main(void)
{
	int loopSize;

	scanf("%d", &loopSize);

	for (int i = 0; i < loopSize; i++)
	{
		int R,afterRIndex=0;
		char s[20], afterR[2000]="";

		scanf("%d", &R);
		scanf("%s", s);

		for (int j = 0; s[j] != NULL; j++)// 기본값 s가 끝날때까지반복
			for (int k = 0; k < R; k++)//R 크기만큼 afterR에 동일한 글자 저장
				afterR[afterRIndex++] = s[j];
	
		printf("%s\n", afterR);
	}

	return 0;
}
