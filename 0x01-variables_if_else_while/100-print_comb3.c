#include <stdio.h>
/**
 *  main - prints all possible different combinations of two digits
 *
 *  Return: Always 0 (success)
 *
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	for (tens = '0'; tens <= '9'; tens++)/* prints tens di        git*/
	{
	for (ones = '0'; ones <= '9'; ones++)/* printsones dig        it*/
	{
	if (!((ones == tens) || (tens > ones)))/*eliminates re        pitition*/
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
