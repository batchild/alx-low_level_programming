#include "main.h"
/**
 * main -Entry point
 * Description: prints 'Main \n'
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "Main\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++
	}
	return (0);
}

