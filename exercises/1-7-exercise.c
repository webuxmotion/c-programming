// gcc exercises/1-7-exercise.c -o main && ./main
#include <stdio.h>

int main()
{
  while (getchar() != EOF)
    ;

  printf("EOF is: %d\n", EOF);

  return 0;
}
