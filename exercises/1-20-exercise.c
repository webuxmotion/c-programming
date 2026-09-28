// gcc exercises/1-20-exercise.c -o main && ./main

#include <stdio.h>

#define TABSTOP 4

int main()
{
  printf("1-20\n");
  int c;
  int position = 0;
  int spacesToNextTabstop = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      spacesToNextTabstop = TABSTOP - (position) % TABSTOP;

      for (; spacesToNextTabstop > 0; spacesToNextTabstop--)
      {
        putchar(' ');
        ++position;
      }
    }
    else if (c == '\n')
    {
      position = 0;
      putchar(c);
    }
    else
    {
      ++position;
      putchar(c);
    }
  }

  return 0;
}
