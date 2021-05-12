#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, k, result;
	result = 2;

	printf("Enter a number:");
	scanf("%d", &n);

	for (k = 0; result <= n; k++)
	{
		result *= 2;
	}
	printf("%d", k);
}