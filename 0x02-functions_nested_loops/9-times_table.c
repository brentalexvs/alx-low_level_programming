#include "main.h"
/**
 * times_table - display the 9 times tables in a table
 * Return: result
 */

void times_table(void)
{
	int a, b, result;

		for (a = 0 ; a < 10 ; a++)
		{
			for (b = 0 ; b < 10 ; b++)
			{
				result = a * b;
				_putchar(result + '0');
			}
		}
	_putchar('\n');


}
