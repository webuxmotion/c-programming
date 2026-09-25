// gcc exercises/1-13-histogram-words-lengths.c -o main && ./main
#include <stdio.h>

#define MAX_WORD_LENGTH 20
#define IN 1
#define OUT 0

int main()
{
  printf("Histogram of the lengths of words in its input\n");

  int c;
  int word_lengths[MAX_WORD_LENGTH];
  int count_words = 0;
  int position_state = OUT;
  int current_length = 0;

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
        ++count_words;
        position_state = OUT;
        if (current_length < (MAX_WORD_LENGTH - 1))
        {
          ++word_lengths[current_length];
        }
        else
        {
          ++word_lengths[MAX_WORD_LENGTH - 1];
        }
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
    ++count_words;
    if (current_length < (MAX_WORD_LENGTH - 1))
    {
      ++word_lengths[current_length];
    }
    else
    {
      ++word_lengths[MAX_WORD_LENGTH - 1];
    }
  }

  printf("count_words is: %d\n", count_words);

  // Visualization (Printing the Histogram)
  for (int i = 1; i < MAX_WORD_LENGTH; i++)
  {
    printf("%2d: ", i);
    for (int j = 0; j < word_lengths[i]; j++)
    {
      printf("*");
    }
    printf(" (%d)\n", word_lengths[i]);
  }

  return 0;
}