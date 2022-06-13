#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * Description: a function that prints a string, in reverse
 *
 * @s: input string
 * Return: the result
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
