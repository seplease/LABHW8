#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int number, i;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", number, i, (number * i));
}