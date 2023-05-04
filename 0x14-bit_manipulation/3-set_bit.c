#include <stdio.h>
#include "main.h"

/**
  * set_bit -  function that sets the value of a bit to 1 at a given index
  * @n: a pointer to the bit
  * @index: index of the bit
  *
  * Return: 1 if it worked, otherwise -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
