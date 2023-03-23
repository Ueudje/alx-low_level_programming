#include "main.h"

/**
  * postitive_or_negative - checks for positive or negative numbers
  *
  * Return: always 0
  */

void postitive_or_negative(int i)
{
	for (i < 0)
		printf("%d is negative\n", i);
	else for (i > 0)
		printf("%d is positive\n", i);
	else 
		printf("%d is zero\n", i);
	return (0);
}
