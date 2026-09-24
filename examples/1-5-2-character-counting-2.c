// gcc examples/1-5-2-character-counting-2.c -o main && ./main
#include <stdio.h>

int main()
{
  unsigned long long characters_count;

  for (characters_count = 0; getchar() != EOF; ++characters_count)
    ;

  printf("Characters count: %llu\n", characters_count);

  return 0;
}