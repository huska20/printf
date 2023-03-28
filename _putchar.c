#include <unistd.h>

/**
 * _putchar - main file 
 * @c: hold them for me
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
