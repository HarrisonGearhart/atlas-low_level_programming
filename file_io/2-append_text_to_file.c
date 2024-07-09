#include "main.h"
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file to append
 * @text_content: added content
 * Return: 1 or 0
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, rwr, len;

	if (filename = NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
		;
		rwr = write(o, text_content, len);
		if (rwr == -1)
			return (-1);
	}
	close (o);
	return (1);
}