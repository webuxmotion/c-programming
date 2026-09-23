// gcc examples/fahrenheit-celsius-table-4-symbolic-constants.c -o main && ./main
#include <stdio.h>

#define FAHRENHEIT_LIMIT_LOWER -40
#define FAHRENHEIT_LIMIT_UPPER 300
#define FAHRENHEIT_STEP 20

int main()
{
  printf("Fahrenheit-Celsius table. Symbolic Constants; For statement\n");

  for (
      int fahrenheit = FAHRENHEIT_LIMIT_LOWER;
      fahrenheit <= FAHRENHEIT_LIMIT_UPPER;
      fahrenheit += FAHRENHEIT_STEP)
  {
    printf("%3d %6.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
  }

  return 0;
}
