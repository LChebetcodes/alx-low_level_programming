#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
