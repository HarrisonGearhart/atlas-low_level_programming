#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to name of the file created
 * @text_content: pointer to a string to write to the file
 * Return: -1 if fail, 1 if successful 
*/
int create_file(const char *filename, char *text_content)
{
	int o;
	int len = 0;
	int w;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
	if (o == -1)
		return (-1);

	if (text_content == NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
