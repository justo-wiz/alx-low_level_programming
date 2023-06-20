#include "main.h"

/**
 * _islower - Checks for the lowecase character
 * @c: The character to be checked
 * Return: 1 for lowrcase character or 0 for anything else
*/

int _islower(int c)
{

	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	return (0);
}
