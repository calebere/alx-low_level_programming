#include "main.h"

/**
 * put2 - prints one character out of strings
 * @str: input string
 * Return: no return
*/

void put2(char *str)

{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++
	}
}
