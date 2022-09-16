#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: Printing alphabetic numbers in reverse
 *
 * Return: Always returns 0 (success)
*/

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);

}
