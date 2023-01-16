#include <stdio.h>

/**
* main - Entry point
* Return: Always 0
*
*/


int main(void)
{
	int i, j;

	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
			printf("%d", i);
		printf("\n");
	}
	return (0);
}
