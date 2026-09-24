// gcc exercises/1-9-exercise.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Replace multiple blanks with a single blank\n");

  int c;
  int prev_c = 0;

  while ((c = getchar()) != EOF)
  {

    if (c == ' ')
    {
      if (prev_c != ' ') {
        putchar(c);
      }
    } else {
      putchar(c);
    }

    prev_c = c;
  }

  return 0;
}
