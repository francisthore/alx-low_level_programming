#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - copies files
 * @argc: number of args
 * @argv: file names
 * Return: void
*/
int main(int argc, char **argv)
{
	char buffer[1024];
	int file1, file2, fw, fr;

	if (argc != 3)
	{	dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fr = read(file1, buffer, 1024);
	fw = write(file2, buffer, fr);
	if (fr == -1)
	{	close(file1);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fw == -1)
	{	close(file2);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(file1) == -1)
	{	dprintf(2, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{	dprintf(2, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
