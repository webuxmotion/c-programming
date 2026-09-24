// gcc examples/1-5-1-file-copying.c -o main && ./main
#include <stdio.h>

int main()
{
  int c;
  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }

  // for EOF use combination Ctrl + d
  if (c == EOF) {
    printf("EOF\n");
  }

  return 0;
}