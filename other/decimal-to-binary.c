// gcc other/decimal-to-binary.c -o main && ./main
#include <stdio.h>

#define ARRAY_CAPACITY 32

void convert(int *current, int reminder[], int *counter);

int main()
{
  int decimal = 254;

  int current = decimal;
  int reminder[ARRAY_CAPACITY];
  int counter = 0;

  convert(&current, reminder, &counter);

  printf("Decimal %d in binary will be: ", decimal);
  for (int i = counter - 1; i >= 0; i--)
  {
    printf("%d", reminder[i]);
  }
  printf("\n");

  return 0;
}

void convert(int *current, int reminder[], int *counter)
{
  if (*current != 0)
  {
    int currentReminder = *current % 2;
    *current = *current / 2;
    reminder[*counter] = currentReminder ? 1 : 0;
    *counter += 1;

    if (*current != 0)
    {
      convert(current, reminder, counter);
    }
  }
}