#include <stdio.h>
int main(void)
{
  /*for if*/
  for (int i = 0; i <= 15; i++)
  {
    printf("\n%d : ", i);
    if (i % 15 == 0)
    {
      printf("Fizz_buzz\n");
    }
    else if (i % 5 == 0)
    {
      printf("fizz\n");
    }
    else if (i % 3 == 0)
    {
      printf("buzz\n");
    }
    printf("\n--------\n");
  }
}
