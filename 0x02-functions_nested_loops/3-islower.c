#include "main.h"
/**
 * _islower(int c) - checks for lower case characters
 */
int _islower(int c)
{
	if(c > 97 && c < 123)
		return (1);
	else
		return (0);
}
