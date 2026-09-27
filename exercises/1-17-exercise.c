// I'll write program to print all input lines that are longer than 80 characters.
// I don't know how to work with dynamic memory yet, so I'll create two dimension array
// from scratch

// thank you for watching on my productive struggle, productive struggle, productive struggle
// productive struggle, productive struggle, productive struggle, productive struggle ;)

#include <stdio.h>

#define MAX_LINE_LENGTH 1000
#define MAX_LINES 100
#define FILTER_LENGTH 8

int read_line(char s[], int max_length);
void copy(char to[], char from[]);

int main()
{
  printf("-- Printing all input lines that are longer than 80 characters --\n");

  char storage[MAX_LINES][MAX_LINE_LENGTH];
  char current_line[MAX_LINE_LENGTH];
  int current_length = 0;
  int saved_lines_count = 0;

  while ((current_length = read_line(current_line, MAX_LINE_LENGTH)) > 0)
  {
    if (current_length > FILTER_LENGTH && saved_lines_count < MAX_LINES)
    {
      copy(storage[saved_lines_count], current_line);
      ++saved_lines_count;
    }
  }

  if (saved_lines_count > 0)
  {
    printf("\n We have %d lines longer than %d characters, here they are:\n", saved_lines_count, FILTER_LENGTH);

    for (int i = 0; i < saved_lines_count; i++)
    {
      printf("%s", storage[i]);
    }
  }
  else
  {
    printf("There is no lines longer than %d characters.\n", FILTER_LENGTH);
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