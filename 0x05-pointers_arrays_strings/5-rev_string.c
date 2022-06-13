#include "main.h"
/**
 * rev_string - function that reverses a string.
 *
 * Description: a function that reverses a string
 *
 * @s: input string
 * Return: output
 */
void rev_string(char *s)
{
	int l = 0;
	int r = 0;
	char tmp;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	while (l > r)
	{
	tmp = s[r];
		s[r] = s[l];
		s[l] = tmp;
		l--;
		r++;
	}
}
