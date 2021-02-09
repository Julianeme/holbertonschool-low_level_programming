#include "holberton.h"

/**
 *jack_bauer - prints all minutes of the day
 *
 */

void jack_bauer(void)
{
	int hd;
	int hu;
	int md;
	int mu;

	for (hd = 0; hd <= 2; hd++)
	{
		for (hu = 0; hu <= 9; hu++)
		{
			for (md = 0; md <= 5; md++)
			{
				for (mu = 0; mu <= 9; mu++)
				{
					_putchar(hd + 48);
					_putchar(hu + 48);
					_putchar(58);
					_putchar(md + 48);
					_putchar(mu + 48);
					_putchar(10);

					if (hd == 2 && hu == 3 && md == 5 && mu == 9)
					{
						hu = 10;
						hd++;
					}
				}
			}
		}
	}
}
