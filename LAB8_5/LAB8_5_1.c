#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int rows, columns, i, j;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &columns);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
			printf("*");
		printf("\n");
	}
}