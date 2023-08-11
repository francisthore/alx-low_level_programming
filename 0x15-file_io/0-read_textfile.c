#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints in to the std out
 * @filename: name of the file to be read
 * @letters: number of letters to be read
 * Return: number of letters read or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_read, letters_printed;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	/* Handling void filename */
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	/* Opening the file and handling failure to open */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}
	letters_read = read(fd, buff, letters);
	if (letters_read == -1)
	{
		free(buff);
		return (0);
	}
	letters_printed = write(1, buff, letters_read);
	if (letters_printed == -1 || letters_printed != letters)
	{
		free(buff);
		return (0);
	}
	else
		return (letters_printed);
	close(fd);
	free(buff);
}
