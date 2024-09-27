#include "main.h"
/**
 * _puts - Prints a string
 * @str: Pointer to the string
 * Return: String and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

