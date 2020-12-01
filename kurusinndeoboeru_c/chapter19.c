#include <stdio.h>

int main(void)
{
  int score;

  do
  {
    printf("点数は？\n");
    scanf("%d", &score);
  } while (score < 0 || score > 100);

  printf("点数=>%d\n",score);

  return 0;
}
