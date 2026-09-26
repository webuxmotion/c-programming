// gcc examples/1-9-character-arrays.c -o main && ./main
#include <stdio.h>

#define MAX_INPUT_LINE_LENGTH 1000

int readline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  printf("--- print the longest input line ---\n");

  int current_line_length;
  int max_length_seen_so_far = 0;
  char current_line[MAX_INPUT_LINE_LENGTH];
  char longest_line[MAX_INPUT_LINE_LENGTH];

  while ((current_line_length = readline(current_line, MAX_INPUT_LINE_LENGTH)) > 0)
  {
    if (current_line_length > max_length_seen_so_far)
    {
      max_length_seen_so_far = current_line_length;
      copy(longest_line, current_line);
    }
  }
  if (max_length_seen_so_far > 0)
  {
    printf("%s", longest_line);
  }

  return 0;
}

int readline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
  {
    s[i] = c;
  }

  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

void copy(char to[], char from[])
{
  int i = 0;

  while ((to[i] = from[i]) != '\0')
  {
    ++i;
  }
}
