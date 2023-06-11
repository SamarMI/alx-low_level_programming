#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters read.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_myfile, write_myfile, open_myfile;
	char *str;

	if (!filename)
		return (0);

	open_myfile = open(filename, O_RDONLY);
	if (open_myfile == -1)
	return (0);

	str =  malloc(sizeof(char *) * letters);
	if (!str)
		return (0);

	read_myfile = read(open_myfile, str, letters);
	write_myfile = write(STDOUT_FILENO, str, read_myfile);

	if (read_myfile == -1 || write_myfile == -1 || read_myfile != write_myfile)
	{
		free(str);
		return (0);
	}
	free(str);
	close(open_myfile);

	return (read_myfile);
}
