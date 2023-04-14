#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory
  * @b: numbers of bite to allocate
  * Return: a pointer to the allocted memory
  */

void *malloc_checked(unsigned int b)
{
		void *s;



	s = malloc(b);



	if (s == NULL)

		exit(98);



	return (s);

}
