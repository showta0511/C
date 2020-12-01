#include <stdio.h>

int main(void)
{
  int age;
  printf("年齢は？\n");
  scanf("%d", &age);
  if (age <= 3)
  {
    printf("幼児です\n");
  }
  else
  {
    if (age <= 12)
    {
      printf("子供です\n");
    }
    else
    {
      printf("大人です\n");
    }
  }

  return 0;
}
