#include <stdio.h>

void process_char() {
  int c = getchar();

  if (c != EOF) {
    putchar(c);
    process_char();
  }
};

int main()
{
  process_char();
  return 0;
}