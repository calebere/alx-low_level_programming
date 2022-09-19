#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: input string.
 * Return: no return.
*/

void print_rev(char *s)

{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
<<<<<<< HEAD
	_putchar('\n');
=======
	putchar('\n');
>>>>>>> 9eaa9a69761462e57b98b764e3eb0cb88eef16a5
}
