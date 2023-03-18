#include <stdio.h>
/**
* main - main function
* Return: always 0
*/
int main(void)
{

	int i;
	int j;
	int n;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 1 ; j < 9 ; j++)
	{
		for (n = 2 ; n < 10 ; n++)
		{
			if (i < j && j < n && i != j && i != n && j != n)

			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(n + '0');
				if (i + j + n  != 24)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
