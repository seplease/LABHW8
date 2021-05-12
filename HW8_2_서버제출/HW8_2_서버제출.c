#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, score, max, min;

	max = 0;
	min = 10000;

	scanf("%d", &n);

	if (n == 0)
		printf("no data.");
	else
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d", &score);
			if (score >= max)
				max = score;
			if (score <= min)
				min = score;
		}
		printf("%d\n", max);
		printf("%d\n", min);
	}
}