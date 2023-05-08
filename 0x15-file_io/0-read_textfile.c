#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a txt file and prints to stdout
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, num_letters, wr;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd > -1)
	{
		buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);
		num_letters = read(fd, buffer, letters);
		if (num_letters > -1)
		{
			buffer[num_letters] = '\0';
			wr = write(1, buffer, num_letters);
			if (wr > -1)
			{
				free(buffer);
				close(fd);
				return (num_letters);
			}
			else
			{
				free(buffer);
				close(fd);
				return (0);
			}
		}
		else
		{
			close(fd);
			return (0);
		}
	}
	else
		return (0);
}
