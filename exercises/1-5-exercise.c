// gcc exercises/1-5-exercise.c -o main && ./main
#include <stdio.h>

int main()
{
  printf("Fahrenheit    Celsius\n");

  for (int fahrenheit = 300; fahrenheit >= -40; fahrenheit -= 20) {
    printf("%3d ......... %.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
  }

    return 0;
}
