#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void read_err(int fd, char *filename);

/**
 * read_err - checks read error
 * @fd: fd
 * @filename: name of the file
 * Return: void
*/
void read_err(int fd, char *filename)
{
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * main - copies file to file2
 * @ac: args counter
 * @av: array of args
 * Return: 0
 */

int main(int ac, char **av)
{
	int file1, file2, letters_read;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = open(av[1], O_RDONLY);
	if (file1 < 0)
	{
		dprintf(1, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((letters_read = read(file1, buffer, sizeof(buffer))) > 0)
	{
		if (write(file2, buffer, letters_read) != letters_read)
		{
			letters_read = -1;
			break;
		}
	}
	if (close(file1) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}


