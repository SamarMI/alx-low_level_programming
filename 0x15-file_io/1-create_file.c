#include "main.h"

/**
 * create_file -  fn Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1 and Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int open_myfile, write_myfile, letters = 0;

	if (!filename)
		return (-1);

	while (text_content[letters])
		letters++;

	open_myfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_myfile = write(open_myfile, text_content, letters);

	if (open_myfile == -1 || write_myfile == -1)
		return (-1);

	close(open_myfile);

	return (1);
}
