#include <stdio.h>

int main(void)
{
	char input[100];
	int location[26] = { -1, };

	scanf("%s", input);

	for (int i = 0; i < 26; i++)// -1로 초기화
		location[i] = -1;

	for (int i = 0; input[i]!=NULL; i++) 
	{
		int tmp = input[i] - 'a';// a=0 b=1 ... 에 맞게끔 tmp에 저장
		
		if(location[tmp]==-1)// location[tmp]==1 일때는 아직 해당 알파벳이 나오지 않았을때
			location[tmp] = i;// 해당 알파벳 위치에 순서를 저장

	}

	for (int i = 0; i < 26; i++)
		printf("%d ", location[i]);

	return 0;
}
