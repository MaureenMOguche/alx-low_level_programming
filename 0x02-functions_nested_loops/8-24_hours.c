#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hr/10) + '0');
			_putchar((hr%10) + '0')
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min / 10) + '0');
			min++;
		}
	hr++;
	}
}
