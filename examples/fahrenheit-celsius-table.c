// gcc examples/fahrenheit-celsius-table.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Fahrenheit-Celsius table\n");
  int fahrenheit, celsius;
  int fahr_temperature_limit_lower,
      fahr_temperature_limit_upper,
      fahr_temperature_step;

  fahr_temperature_limit_lower = 0;
  fahr_temperature_limit_upper = 300;
  fahr_temperature_step = 20;

  fahrenheit = fahr_temperature_limit_lower;

  while (fahrenheit <= fahr_temperature_limit_upper)
  {
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("%d -> %d\n", fahrenheit, celsius);
    fahrenheit += fahr_temperature_step;
  }

  return 0;
}
