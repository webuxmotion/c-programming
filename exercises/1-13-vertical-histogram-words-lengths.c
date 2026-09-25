// gcc exercises/1-13-vertical-histogram-words-lengths.c -o main && ./main
#include <stdio.h>

#define MAX_WORD_LENGTH 20
#define IN 1
#define OUT 0

int save_word_length(int word_lengths[], int length);
void set_longest_count(int *longest_count, int count);

int main()
{
  printf("Histogram of the lengths of words in its input\n");

  int c;
  int word_lengths[MAX_WORD_LENGTH];
  int position_state = OUT;
  int current_length = 0;
  int longest_count = 0;

  for (int i = 0; i < MAX_WORD_LENGTH; i++)
  {
    word_lengths[i] = 0;
  }

  // Data Collection (Word Length Counting)
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t' || c == ',' || c == '.' || c == '!' || c == ';')
    {
      if (position_state == IN)
      {
        position_state = OUT;

        current_length = save_word_length(word_lengths, current_length);
        set_longest_count(&longest_count, word_lengths[current_length]);

        current_length = 0;
      }
    }
    else
    {
      position_state = IN;
      ++current_length;
    }
  }

  if (position_state == IN)
  {
    current_length = save_word_length(word_lengths, current_length);
    set_longest_count(&longest_count, word_lengths[current_length]);
  }

  // Visualization horizontal (Printing the Histogram)
  for (int i = 1; i < MAX_WORD_LENGTH; i++)
  {
    printf("%2d: ", i);
    for (int j = 0; j < word_lengths[i]; j++)
    {
      printf("*");
    }
    printf(" (%d)\n", word_lengths[i]);
  }

  printf("\n");

  // Visualization vertical (Printing the Histogram)
  printf("--- Vertical Histogram ---\n\n");

  for (int i = longest_count; i > 0; i--)
  {
    printf("%2d | ", i);
    for (int j = 1; j < MAX_WORD_LENGTH; j++)
    {
      if (i <= word_lengths[j])
      {
        printf("*  ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }

  printf("   +-");
  for (int j = 1; j < MAX_WORD_LENGTH; j++)
  {
    printf("---");
  }
  printf("\n");

  printf("   ");
  for (int j = 1; j < MAX_WORD_LENGTH; j++)
  {
    printf("%3d", j);
  }

  printf("\n");
  printf("The most frequent word number: %d\n", longest_count);

  return 0;
}

void set_longest_count(int *longest_count, int count)
{
  if (*longest_count < count)
  {
    *longest_count = count;
  }
}

int save_word_length(int word_lengths[], int length)
{
  if (length >= MAX_WORD_LENGTH)
  {
    length = MAX_WORD_LENGTH - 1;
  }
  ++word_lengths[length];

  return length;
}