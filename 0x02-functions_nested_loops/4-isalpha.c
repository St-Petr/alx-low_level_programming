#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if character is a letter,0 otherwise
 */
int _isalpha(int w)
{
	if ((w >= 'a' && w <= 'z') || (w >= 'A' && w <= 'Z'))
		return (1);
	else
		return (0);
}
