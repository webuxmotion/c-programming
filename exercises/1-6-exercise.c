// gcc exercises/1-6-exercise.c -o main && ./main
#include <stdio.h>

int main()
{
  int isEOF;
  int c;

  while ((c = getchar()) != EOF)
  {
    printf("%d", c == EOF);
  }

  printf("c is EOF\n");
  printf("%d\n", c == EOF);

  return 0;
}
