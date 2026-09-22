// gcc other/binary-to-decimal.c -o main && ./main
#include <stdio.h>

int main()
{
  char binary[] = "111111111111111";
  int total_size = sizeof(binary) / sizeof(binary[0]);
  int bit_count = total_size - 1;
  int cols[bit_count];
  int decimal = 0;

  printf("Binary to Decimal conversion\n");

  for (int i = 0; i < bit_count; i++)
  {
    if (i == 0)
    {
      cols[i] = 1;
    }
    else
    {
      cols[i] = cols[i - 1] * 2;
    }
  }

  for (int i = (bit_count - 1); i >= 0; i--)
  {
    int binary_index = (bit_count - 1) - i;
    printf("Weight: %3d => Біт: %c\n", cols[i], binary[binary_index]);
    if (binary[binary_index] == '1')
    {
      decimal += cols[i];
    }
  }

  printf("Decimal: %d\n", decimal);

  return 0;
}
