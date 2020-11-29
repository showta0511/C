#include <stdio.h>

void f(void)
{
  /*
  for (int i = 0; i <= 5; i++)
  {
    printf("%d\n",i)  ;
  }
  静的変数
*/
  static int i = 0;
  i++;
  printf("%d\n",i);
}
int main(void)
{
  f();
  f();
  f();
  f();
  f();
}
