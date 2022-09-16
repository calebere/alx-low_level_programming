#include <stdio.h>

/**
 * main - Entry point for pragram
 * Description: print all int followed by comma
 * Return: Always returns 0 (success)
*/

int main(void)
{

	int a;

	for (a = 10; a < 20; a++)
		{
		putchar((a % 10) + '0');
		if (a != 19)
		{
			putchar(',');
			putchar(' ');
		}
		}
	putchar('\n');
	return (0);

}
