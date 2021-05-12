#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%d\n", i * i * i);
}