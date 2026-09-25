// gcc exercises/1-15-temperature-conversion.c -o main && ./main
#include <stdio.h>

float convertToCelsius(float fahrenheit);

int main()
{
  printf("Fahrenheit    Celsius\n");

  for (int fahrenheit = 300; fahrenheit >= -40; fahrenheit -= 20)
  {
    printf("%3d ......... %.2f\n", fahrenheit, convertToCelsius(fahrenheit));
  }

  return 0;
}

float convertToCelsius(float fahrenheit)
{
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}