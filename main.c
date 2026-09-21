#include <stdio.h>

void change_value(int *num);

int main() {
  int my_num;

  my_num = 30;
  change_value(&my_num);
  printf("%d\n", my_num);

  return 0;
}

void change_value(int *num) {
  *num = 100;
}
