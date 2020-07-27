#include <stdio.h>

int main(void)
{
	int caseSize;
	scanf("%d", &caseSize);

	for (int i = 0; i < caseSize; i++)// 위에서 입력받은 만큼 loop 진행
	{
		int stuSize, score[1000], sum = 0, cnt=0;// cnt는 평균을 넘은 학생 수
		double avg, result;//result는 평균을 넘은 학생 수의 비율

		scanf("%d", &stuSize);
		for (int j=0; j < stuSize; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / stuSize;// 평균 구하기

		for (int j = 0; j < stuSize; j++)// 평균을 넘은 학생 수 구하기
			if (score[j] > avg)
				cnt++;

		result = ((double)cnt /stuSize) * 100;// 평균을 넘은 학생의 비율 구하기

		printf("%.3lf%\n", result);
	}
	return 0;
}
