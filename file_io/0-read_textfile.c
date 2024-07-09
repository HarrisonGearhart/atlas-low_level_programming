#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: a pointer to the name of the file
 * @letters: the number of letters the function should read and print
 * Return: 0 if fail or NULL
 * the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff_letters;

	if (!filename)
		return (0);
	
	buff_letters = malloc(sizeof(char) * letters);
	if (buff_letters == NULL)
		return (0);
	
	o = open(filename, O_RDONLY);
	r = read(o, buff_letters, letters);
	w = write(STDOUT_FILENO, buff_letters, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff_letters);
		return (0);
	}
	free(buff_letters);
	close(o);
	return (w);

}
