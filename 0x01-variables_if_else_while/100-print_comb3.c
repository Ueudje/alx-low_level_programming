#include <stdio.h>
/**
* main - main function
*
* Return: always 0
*/
int main(void)
{
	int i;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			if (i < n && i != n)
			{
				putchar(i + '0');
				putchar(n + '0');
				if (i + n != 17)

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
