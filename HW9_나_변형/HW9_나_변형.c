#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, unit, i, result = 0;

	scanf("%d %d", &n, &unit);
	
	for (i = 1; i <= n; i++)
	{
		result += i;
		if (i % unit == 0)
		{
			printf("%d ", result);
			result = 0;
		}
	}
}