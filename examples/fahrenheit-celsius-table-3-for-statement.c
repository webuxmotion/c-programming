// gcc examples/fahrenheit-celsius-table-3-for-statement.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Fahrenheit-Celsius table. With for statement\n");
  int fahrenheit;

  for (fahrenheit = -40; fahrenheit <= 300; fahrenheit += 20)
  {
    printf("%3d %6.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
  }

  return 0;
}
