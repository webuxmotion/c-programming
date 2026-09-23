// gcc examples/fahrenheit-celsius-table-2.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Fahrenheit-Celsius table. Second version\n");
  float fahrenheit, celsius;
  float fahr_temperature_limit_lower,
      fahr_temperature_limit_upper,
      fahr_temperature_step;

  fahr_temperature_limit_lower = -40;
  fahr_temperature_limit_upper = 300;
  fahr_temperature_step = 20;

  fahrenheit = fahr_temperature_limit_lower;

  while (fahrenheit <= fahr_temperature_limit_upper)
  {
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%3.0f %6.2f\n", fahrenheit, celsius);
    fahrenheit += fahr_temperature_step;
  }

  return 0;
}
