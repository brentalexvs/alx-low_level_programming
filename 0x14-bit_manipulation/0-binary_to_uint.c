#include "main.h"

/**
 * binary_to_uint - converts  binary numbers to unsigned int.
 * @bin: pointer to a string containing binary numbers
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *bin)
{
	int a;
	unsigned int num;

	num = 0;
	if (!bin)
		return (0);
	for (a = 0; bin[a] != '\0'; a++)
	{
		if (bin[a] != '0' && bin[a] != '1')
			return (0);
	}
	for (a = 0; bin[a] != '\0'; a++)
	{
		num <<= 1;
		if (bin[a] == '1')
			num += 1;
	}
	return (num);
}
