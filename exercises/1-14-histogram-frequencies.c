// gcc exercises/1-14-histogram-frequencies.c -o main && ./main
#include <stdio.h>

#define TOTAL_CHARS 128

int main()
{
  printf("Histogram of frequencies of different characters\n");

  int char_counts[TOTAL_CHARS];
  int c;

  for (int i = 0; i < TOTAL_CHARS; i++)
  {
    char_counts[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    if (c >= 0 && c < TOTAL_CHARS)
    {
      ++char_counts[c];
    }
  }

  for (int i = 32; i <= TOTAL_CHARS - 2; i++)
  {
    if (char_counts[i] > 0)
    {
      printf("%c: ", i);
      for (int j = 0; j < char_counts[i]; j++)
      {
        printf("*");
      }
      printf(" (%d)\n", char_counts[i]);
    }
  }

  return 0;
}