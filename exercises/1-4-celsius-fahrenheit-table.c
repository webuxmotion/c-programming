// gcc exercises/1-4-celsius-fahrenheit-table.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Celsius    Fahrenheit\n");
  float celsius, fahrenheit;
  float celsius_temperature_limit_lower,
      celsius_temperature_limit_upper,
      celsius_temperature_step;

  celsius_temperature_limit_lower = -80;
  celsius_temperature_limit_upper = 200;
  celsius_temperature_step = 20;

  celsius = celsius_temperature_limit_lower;

  while (celsius <= celsius_temperature_limit_upper)
  {
    fahrenheit = celsius / (5.0 / 9.0) + 32.0;
    printf("%6.2f ... %.2f\n", celsius, fahrenheit);
    celsius += celsius_temperature_step;
  }

  return 0;
}
