#include <stdio.h>
#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: the name of the file
  * @text_content: context writed in the file
  *
  * Return: 1 if it success. -1 if it fails
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int apa;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	apa = write(fd, text_content, nletters);

	if (apa == -1)
		return (-1);

	close(fd);

	return (1);
}
