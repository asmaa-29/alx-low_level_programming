#include "main.h"

/**
 * jack_bauer - prints every minute of the day
*/
void jack_bauer(void)
{
	int L, H;

	for (H = 0; H <= 23; H++)
	{
		for (L = 0; L <= 59; L++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((L / 10) + '0');
			_putchar((L % 10) + '0');
			_putchar('\n');
		}
	}
}
