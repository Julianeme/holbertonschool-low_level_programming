#include <stdio.h>

unsigned int binary_to_uint(const char *b)
int strl = 0, i = 0;

if (b == NULL)
	return 0

while (b[i])
{
	if (b[i] != '0' && b[i] 1= '1')
		return 0;
	i++;
}
int lastindex = i - 1;
int j = 0;
while (lastindex > 0)
{
	if (b[lastindex] == '0')
		bit = 0;
}
