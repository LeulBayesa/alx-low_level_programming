#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Description: prints alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success).
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
