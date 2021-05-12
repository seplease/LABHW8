#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;

	i = 1;
	while (i <= 9)
	{
		j = 2;
		while (j <= 8)
		{
			printf("%d * %d = %d\t", i, j, (i * j));
			j += 2;
		}
		printf("\n");
		i++;
	}
}