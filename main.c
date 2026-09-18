#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;
  float lowerCelcius, upperCelcius, stepCelcius; 

  lower = 0.0f; 
  upper = 300.0f; 
  step = 20.0f;

  lowerCelcius = -50.0f;
  upperCelcius = 150.0f;
  stepCelcius = 10.0f;

  fahr = lower;

  printf("Fahrenheit to Celsius conversion table\n");

  while (fahr <= upper) {
    celsius = (5.0f / 9.0f) * (fahr - 32.0f);
    printf("%3.0f\t%6.2f\n", fahr, celsius);
    fahr = fahr + step;
  }

  celsius = lowerCelcius;

  printf("\nCelsius to Fahrenheit conversion table\n");

  while (celsius <= upperCelcius) {
    fahr = (celsius / (5.0f / 9.0f)) + 32.f;
    printf("%6.0f\t%6.2f\n", celsius, fahr);
    celsius += stepCelcius;
  }

  return 0;
}