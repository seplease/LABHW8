#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, result, found;

	found = 0;

	printf("�� ���� �����Ͻðڽ��ϱ�?: ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf("%d", &result);
		if (result == (n * i))
			found++;
	}
	printf("%d���� �����ܿ��� %d���� �¾ҽ��ϴ�", n, found);
}