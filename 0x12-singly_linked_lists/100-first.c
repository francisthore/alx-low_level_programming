#include <stdio.h>

/**
 * before_main - runs before the main function is called
 */

void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
