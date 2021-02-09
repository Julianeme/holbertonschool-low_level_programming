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

	for (hd = '0'; hd <= '2'; hd++)
	{
		for (hu = '0'; hu <= 9; hu++)
		{
			for (md = '0'; md <= '5'; md++)
			{
				for (mu = '0'; mu <= '9'; mu++)
				{
					_putchar(hd);
					_putchar(hu);
					_putchar(58);
					_putchar(md);
					_putchar(mu);
					_putchar(10);

					if (hd == '2' && hu == '3' && md == '5' && mu == '9')
					{
						hu = 58;
						hd++;
					}
				}
			}
		}
	}
}
