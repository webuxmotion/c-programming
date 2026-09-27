// gcc exercises/1-18-exercise.c -o main && ./main

#include <stdio.h>

#define MAX_LINE_LENGTH 1000
#define MAX_LINES 100

int read_line(char s[], int max_length);
void copy(char to[], char from[]);
int remove_trailing(char s[], int length);

int main()
{
  printf("-- Remove trailing blanks and tabs --\n");

  char storage[MAX_LINES][MAX_LINE_LENGTH];
  char current_line[MAX_LINE_LENGTH];
  int current_length = 0;
  int saved_lines_count = 0;

  while ((current_length = read_line(current_line, MAX_LINE_LENGTH)) > 0)
  {
    if (saved_lines_count < MAX_LINES)
    {
      if (remove_trailing(current_line, current_length) > 0)
      {
        copy(storage[saved_lines_count], current_line);
        ++saved_lines_count;
      }
    }
  }

  if (saved_lines_count > 0)
  {
    printf("\n We have %d lines:\n", saved_lines_count);

    for (int i = 0; i < saved_lines_count; i++)
    {
      printf("%s", storage[i]);
    }
  }
  else
  {
    printf("There is no lines to show.\n");
  }

  return 0;
}

int read_line(char s[], int max_length)
{
  int i, c;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
  {
    if (i < max_length - 2)
    {
      s[i] = c;
    }
  }

  if (c == '\n')
  {
    if (i < max_length - 2)
    {
      s[i] = c;
    }
    ++i;
  }

  if (i < max_length)
  {
    s[i] = '\0';
  }
  else
  {
    s[max_length - 1] = '\0';
  }

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

int remove_trailing(char s[], int length)
{
  int i = length - 1;

  if (s[i] == '\n')
  {
    if (i == 0)
      return 0;
    --i;
  }

  for (; i >= 0 && (s[i] == ' ' || s[i] == '\t'); i--)
    ;

  if (i >= 0)
  {
    s[i + 1] = '\n';
    s[i + 2] = '\0';

    return i + 2;
  }

  return 0;
}