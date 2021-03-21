#include <stdio.h>

//function to print int numbers
//@n: int number to be printed

void print(int n);

void print(int n)
{
  if (n < 0) {
    putchar('-');
    n = -n;
  }

  if (n/10)
    print(n/10);

  putchar(n%10 + '0');
}

int main()
{
  int n = -2147483647;
  print(n);
  return 0;
}

