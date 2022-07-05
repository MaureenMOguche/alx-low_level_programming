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
			putchar(hr+48);
			putchar(':');
			putchar(min+48);
			min++;
		}
	hr++;
	}
}
