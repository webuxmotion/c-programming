// gcc exercises/1-12-exercise.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Prints input one word per line\n");

  const int OUT = 0;
  const int IN = 1;
  int inside_word = OUT;
  int words_count = 0;
  int c;
  int should_newline = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      inside_word = OUT;
      if (should_newline)
      {
        printf("\n");
        should_newline = 0;
      }
    }
    else if (inside_word == OUT)
    {
      ++words_count;
      inside_word = IN;
      if (should_newline == 0)
      {
        should_newline = 1;
      }
      putchar(c);
    }
    else
    {
      putchar(c);
    }
  }

  printf("Words count: %d\n", words_count);

  return 0;
}
