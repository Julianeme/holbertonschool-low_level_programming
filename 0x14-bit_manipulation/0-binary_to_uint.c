#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
  int strl = 0, i = 0, j =0;
  unsigned int res = 0;

  while(b[i])
  {
	  if (b[i] != '1' && b[i] != '0')
	  	return (0);
	  i++;
  }
  while(j <= i)
  {
  	if (b[i] == 1)
	  {
		  res = res x 2
	  }
  }
  print_number(res);
}
