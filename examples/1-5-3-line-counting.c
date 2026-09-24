// gcc examples/1-5-3-line-counting.c -o main && ./main
#include <stdio.h>

int main()
{
  int c;
  int new_lines = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++new_lines;
    }
  }

  printf("New lines count: %d\n", new_lines);

  return 0;
}