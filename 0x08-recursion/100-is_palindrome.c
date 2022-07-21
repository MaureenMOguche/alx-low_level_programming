#include "main.h"

/**
 * is_palindrome - checks if a word is a palindrome
 * @s: word to be checked
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	char *p;

/*	if (*s == '\0')
		return*/
	is_palindrome(s + 1);
	p = &(*s);
	if (*p == *s)
	{
		return (1);
	}
	return (0);
}
