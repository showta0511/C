#include <stdio.h>

int main(void)
{
  int a = 1000, b = 1, c = 12;

  //桁を合わして見やすくする
  printf("Aは %5d です\n", a);
  printf("Bは %5d です\n", b);
  printf("Cは %5d です\n\n", c);

  printf("Aは %05d です\n", a);
  printf("Bは %05d です\n", b);
  printf("Cは %05d です\n", c);
  return 0;
}
