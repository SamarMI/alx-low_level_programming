#include "main.h"


/**
 *  jack_bauer - prints every minute of the day of Jack Bauer,
 *  and will
 *  starting from 00:00 to 23:59.
 *  void return
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		while (j < 23)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
		j = 0;
	}

}
