#include "main.h"

/**
  * reverse_array - The main function that reverses the content
  * of an array of integers
  * @a: Function parameter
  * @n: Function parameter
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
