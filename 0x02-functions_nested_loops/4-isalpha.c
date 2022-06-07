#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 *
 * @c: An input character to be checked
 *
 * Description: a function that checks for alphabetic character.
 * 
 * 
 * Return: 1 or 0 .
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				return (1);
		}
	}
	return (0);
}
