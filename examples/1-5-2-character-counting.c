// gcc examples/1-5-2-character-counting.c -o main && ./main
#include <stdio.h>

int main()
{
  long characters_count = 0;

  while (getchar() != EOF) {
    ++characters_count;
  }

  printf("Characters count: %ld\n", characters_count);

  return 0;
}