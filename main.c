#include <stdio.h>

void swap(int *a, int *b);

int main()
{
  int a, b;

  a = 20;
  b = 99;

  printf("a is %d, and b is %d\n", a, b);
  swap(&a, &b);
  printf("a is %d, and b is %d\n", a, b);

  return 0;
}

void swap(int *a, int *b)
{
  int temp;

  temp = *b;
  *b = *a;
  *a = temp;
}
