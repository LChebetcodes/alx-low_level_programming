#include "main.h"
#include <unistd.h>

/**
 * _putchar -  writes the character c to stdout
 * @c: Character to be written to stdout
 * Return: On success 1 and on error,
 * -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
