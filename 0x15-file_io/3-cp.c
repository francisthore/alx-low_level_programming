#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void copy_file(char *file1, char *file2);
void create_file(const char *filename, char *text_content);

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: what to write into the file
 * Return: 1 or -1
*/

void create_file(const char *filename, char *text_content)
{
	int fd, cls;

	if (!filename)
		return;
	fd = creat(filename, 00664);
	if (fd > -1)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd > -1)
		{
			if (text_content != NULL)
			{
				write(fd, text_content, strlen(text_content));
				free(text_content);
			}
			cls = close(fd);
			if (cls == -1)
			{
				write(2, "Error: Can't close fd ", 22);
				write(2, "\n", 1);
				exit(100);
			}
			return (1);
		}
		else
			return (-1);
	}
	else
	{
		write(2, "Error: Can't write from file ", 29);
		write(2, filename, strlen(filename));
		write(2, "\n", 1);
		exit(99);
	}
}

/**
 * copy_file - copies file contents to another file
 * @file1: file from
 * @file2: file to
 * Return: 1 on success or -1 on failure
*/

void copy_file(char *file1, char *file2)
{
	int fd1, fd2, sz1, cls;
	char *buffer;

	fd1 = open(file1, O_RDONLY);
	if (fd1 > -1)
	{
		sz1 = lseek(fd1, 0, SEEK_END);
		printf("The size of %s is --> %d <<\n", file1, sz1);
		buffer = malloc(sizeof(char) * sz1);
		if (buffer != NULL)
		{
			lseek(fd1, 0, SEEK_SET);
			fd2 = read(fd1, buffer, sz1);
			printf("Read these many bytes: [%d]\n", fd2);
			cls = close(fd1);
			if (cls == -1)
			{
				write(2, "Error: Can't close fd ", 22);
				write(2, "\n", 1);
				exit(100);
			}
			create_file(file2, buffer);
		}
		else
			return;

	}
	else
	{
		write(2, "Error: Can't read from file ", 28);
		write(2, file1, strlen(file1));
		write(2, "\n", 1);
		exit(98);
	}

}
/**
 * main - tests some code
 * @argc: number of args
 * @argv: file names
 * Return: void
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
