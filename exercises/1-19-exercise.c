// gcc exercises/1-19-exercise.c -o main && ./main

#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int read_line(char s[], int max_length);
void copy(char to[], char from[]);
void reverse(char s[], int length);

int main()
{
  printf("-- Remove trailing blanks and tabs --\n");

  char current_line[MAX_LINE_LENGTH];
  int current_length = 0;

  while ((current_length = read_line(current_line, MAX_LINE_LENGTH)) > 0)
  {
    if (current_length > 0)
    {
      reverse(current_line, current_length);

      printf("%s", current_line);
    }
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

void reverse(char s[], int length)
{
  int temp;
  int left, right;
  length = length - 1;

  if (s[length] == '\n')
  {
    length = length - 1;
  }

  left = 0;
  right = length;

  for (; left < right; right--, left++)
  {
    temp = s[right];
    s[right] = s[left];
    s[left] = temp;
  }
}