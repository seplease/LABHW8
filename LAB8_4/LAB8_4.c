#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score, i, max;

	max = 0;
	score = 0;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);
		if (max < score)
			max = score;
	}
	printf("The best score is %d.", max);
}