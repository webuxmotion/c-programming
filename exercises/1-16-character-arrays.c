// gcc exercises/1-16-character-arrays.c -o main && ./main
#include <stdio.h>

#define MAX_INPUT_LINE_LENGTH 8

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
    printf("This line was %d characters length\n", max_length_seen_so_far);
  }

  return 0;
}

int readline(char s[], int lim)
{
  int c, i;
  int maxPossibleIdx = 0;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
  {
    if (i < lim - 2)
    {
      s[i] = c;
      ++maxPossibleIdx;
    }
  }

  if (c == '\n')
  {
    s[maxPossibleIdx] = c;
    ++maxPossibleIdx;
  }

  s[maxPossibleIdx] = '\0';

  return (i < lim) ? maxPossibleIdx : i;
}

void copy(char to[], char from[])
{
  int i = 0;

  while ((to[i] = from[i]) != '\0')
  {
    ++i;
  }
}
