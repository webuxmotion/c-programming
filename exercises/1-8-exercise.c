// gcc exercises/1-8-exercise.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Count blanks, tabs and newlines\n");

  int c;
  int count_blank = 0,
      count_tab = 0,
      count_newline = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++count_blank;
    }
    else if (c == '\t')
    {
      ++count_tab;
    }
    else if (c == '\n')
    {
      ++count_newline;
    }
  }

  printf("Blanks: %d\n", count_blank);
  printf("Tabs: %d\n", count_tab);
  printf("Newlines: %d\n", count_newline);

  return 0;
}
