#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * Description: function that returns the length of a string.
 *
 * @s: Pointer
 *
 * Return: success 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s++;
	
	}
	return (i);
}
