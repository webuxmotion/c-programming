// gcc examples/1-5-1-file-copying-2.c -o main && ./main
#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }

  
  if (c == EOF) {
    printf("EOF\n");
  }

  return 0;
}