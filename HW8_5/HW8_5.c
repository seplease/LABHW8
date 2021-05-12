#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, factorial;

	factorial = 1;

	printf("Enter a number(>=2) : ");
	scanf("%d", &n);
	printf("%d! = ", n);

	for (i = n; i >= 1; i--)
	{
		factorial *= i;
		printf("%d", i);
		if (i != 1)
			printf(" * ");
	}
	printf(" = %d", factorial);
}