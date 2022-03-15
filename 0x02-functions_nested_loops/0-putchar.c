#include "myfile.h"

/**
 * main - prints out holberton char by char.
 
 * Return: 0.
*/


int main(void)
{
	char str[] = "Putchar";
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
