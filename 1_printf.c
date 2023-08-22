#include "main.h"

int ints_and_double(int digit)
{

	if (digit < 0)
	{
		_putchar('-');
		digit = -digit;
	}

	if (digit > 9)
		ints_and_double(digit / 10);

	_putchar('0' + (digit % 10));
	return (0);
}
