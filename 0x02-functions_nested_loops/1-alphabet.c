#include "main.h"
#include <unistd.h>

/**
 *print_alphabet - prints the alphabets in lowercase
 *Return: Always 0
 */
void print_alphabet(void)
{
	char lca;
	for(lca = 'a'; lca <= 'z'; lca++)
		_putchar(lca);
	
	_putchar('\n');

	return (0);
}
