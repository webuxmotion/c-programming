#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;
  printf("Enter the number of grades: ");
  scanf("%d", &number);

  char *grades = malloc(number * sizeof(char));

  if (grades == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter the grade #%d:", i);
    scanf(" %c", &grades[i]);
  }

  for (int i = 0; i < number; i++) {
    printf("Grade #%d is: %c\n", i, grades[i]);
  }

  free(grades);
  grades = NULL;

  return 0;
}