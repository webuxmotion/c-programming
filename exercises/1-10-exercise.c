// gcc exercises/1-10-exercise.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Replacing tab, backspace and backslash\n");

  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b')
    {
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\')
    {
      putchar('\\');
      putchar('\\');
    }
    else
    {
      putchar(c);
    }
  }

  return 0;
}
