#include <stdio.h>

int olympic_year(int year);

int main(void)
{
  int year, hold;
  printf("何年？\n");
  scanf("%d\n", &year);
  hold = olympic_year(year);

  switch (hold)
  {
  case 0:
    printf("%d年はオリンピック開催年でありません\n", year);
    break;
  case 1:
    printf("%d年は夏オリンピック開催年\n", year);
    break;
  case 2:
    printf("%d年は冬オリンピック開催年\n", year);
    break;
  };
  return 0;
}

//オリンピック開催年の真偽値算出
int olympic_year(int year)
{
  if (year % 2 == 0)
  {
    if (year % 4 == 0)
    {
      return 1;
    }
    else
    {
      return 2;
    }
  }else
  {
    return 0;
  }
}
