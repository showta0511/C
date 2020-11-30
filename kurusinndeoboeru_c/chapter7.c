#include <stdio.h>

int main(void)
{
  int a = 198, b = 138;
  double c = 0.05;
  printf("%d\n", (int)((a + (a * c)) + ((b + (b * c))*4)));
  printf("%d\n", (int)(1000 - ((a * c) + ((b * c) * 4))));
  return 0;
}
