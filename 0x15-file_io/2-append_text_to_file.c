#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_myfile, write_myfile;
	int letters = 0;

	if (!filename || !text_content )
		return (-1);

	open_myfile = open(filename, O_WRONLY | O_APPEND);
	if (open_myfile == -1)
		return (-1);

	while (text_content[letters])
		letters++;

	write_myfile = write(open_myfile, text_content, letters);
	if (write_myfile == -1)
		return (-1);

	close(open_myfile);

	return (1);
}
