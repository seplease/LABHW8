#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, score, max, min;

	max = 0;
	min = 10000;

	printf("Enter the number of scores: ");
	scanf("%d", &n);

	if (n == 0)
		printf("no data.");
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("Enter a score: ");
			scanf("%d", &score);
			if (score >= max)
				max = score;
			if (score <= min)
				min = score;
		}
		printf("The best score is %d\n", max);
		printf("The worst score is %d\n", min);
	}
}