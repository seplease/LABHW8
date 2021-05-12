#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i;
	long long factorial;

	n = 1;
	factorial = 1;

	printf("Enter a number:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		factorial *= i;
		printf("%d! = %lld\n", i, factorial);
	}
}