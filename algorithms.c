#include <stdio.h>

int main()
{

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; i < 9; j++)
    {
      if (i == j || j == (9 - i))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}