// gcc exercises/2-1-exercise.c -o main && ./main
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("Ranges of sizes for variables types\n");

  printf("char: from %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char: from 0 to %u\n", UCHAR_MAX);
  printf("\n");
  printf("short: from %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("unsigned short: from 0 to %u\n", USHRT_MAX);
  printf("\n");
  printf("int: from %d to %d\n", INT_MIN, INT_MAX);
  printf("unsigned int: from 0 to %u\n", UINT_MAX);
  printf("\n");
  printf("long: from %ld to %ld\n", LONG_MIN, LONG_MAX);
  printf("unsigned long: from 0 to %lu\n", ULONG_MAX);
  printf("\n");
  printf("--- Direct Computations ---\n");
  printf("Computed unsigned char max : %u\n", (unsigned char)~0);
  printf("Computed unsigned short max: %u\n", (unsigned short)~0);
  printf("Computed unsigned int max  : %u\n", (unsigned int)~0);
  printf("Computed unsigned long max : %lu\n", (unsigned long)~0);

  printf("Computed signed char: from %d to %d\n", -(int)((unsigned char)~0 / 2) - 1, (int)((unsigned char)~0 / 2));
  printf("Computed signed short: from %d to %d\n", -(int)((unsigned short)~0 / 2) - 1, (int)((unsigned short)~0 / 2));
  printf("Computed signed int: from %d to %d\n", -(int)((unsigned int)~0 / 2) - 1, (int)((unsigned int)~0 / 2));
  printf("Computed signed long: from %d to %d\n", -(int)((unsigned long)~0 / 2) - 1, (int)((unsigned long)~0 / 2));

  return 0;
}