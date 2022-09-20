#include <unistd.h>

/**
 * _putchar - write the character c
 * @c: the character to print
 * Return: on seccess 1
 * On error, -1 is returned and error is set properly
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
