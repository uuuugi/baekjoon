#include <stdio.h>

int main(void)
{
	int score[1000];
	int size, max;
	double avg, sum = 0;
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
		scanf("%d", &score[i]);

	max = score[0]; //임시로max값을 배열을 첫번째 값으로 함
	for (int i = 1; i < size; i++)//가장 큰 값 구하기
		if (max < score[i])
			max = score[i];

	for (int i = 0; i < size; i++)// score/ Max*100 해서 sum 에 저장
		sum+= (double)score[i] / max * 100;

	avg = sum / size;

	printf("%lf", avg);
}
