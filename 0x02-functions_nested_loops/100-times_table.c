#include "main.h"

/**
*print_times_table -> prints the n timetable starting with 0
*@n: parameter
*/
void print_times_table(int n)
{
	int digit, mult, result;

	if (n <= 14 && n >= 0)
	{
		for (digit = 0; digit <= n; digit++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				result = digit * mult
				if (result > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					if (mult != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(result + '0');
				}
			}
			_putchar('\n');
		}
	}
}
