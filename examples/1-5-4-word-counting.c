// gcc examples/1-5-4-word-counting.c -o main && ./main
#include <stdio.h>

int main()
{
  const int OUT = 0;
  const int IN = 1;
  int inside_word = OUT;
  int words_count = 0;
  int c;

  printf("Count words\n");

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t') {
      inside_word = OUT;
    } else if (inside_word == OUT) {
      ++words_count;
      inside_word = IN;
    }
  }

  printf("Words count: %d\n", words_count);

  return 0;
}