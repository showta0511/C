#include <stdio.h>

int main(void)
{
  int money, month;
  money = 1;
  month = 1;
  while (money <= 20000)
  {
    printf("%02d月 %6d円\n", month, money);
    money *= 2;
    month++;
  }

  return 0;
}
