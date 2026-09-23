// gcc examples/fahrenheit-celsius-table-5-constants.c -o main && ./main
#include <stdio.h>

int main()
{
  const int FAHRENHEIT_LIMIT_LOWER = -40;
  const int FAHRENHEIT_LIMIT_UPPER = 300;
  const int FAHRENHEIT_STEP = 20;

  printf("Fahrenheit-Celsius table. Constants; For statement\n");

  for (
      int fahrenheit = FAHRENHEIT_LIMIT_LOWER;
      fahrenheit <= FAHRENHEIT_LIMIT_UPPER;
      fahrenheit += FAHRENHEIT_STEP)
  {
    printf("%3d %6.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
  }

  return 0;
}
