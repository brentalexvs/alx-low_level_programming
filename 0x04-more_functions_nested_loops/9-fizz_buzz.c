#include <stdio.h>

/**
 * main - a function that prints mulitples of 3, 5 and 15
 * Return: 0;
 */


int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
		printf("%s ", "FizzBuzz");
	else if (i % 3 == 0)
		printf("%s ", "Fizz");
	else if (i % 5 == 0)
		printf("%s", "Buzz");
	else
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
