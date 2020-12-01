#include <stdio.h>

int main(void)
{
  //for(;;)無限ループ
  int i, ii;
  for (i = 1; i <= 9; i++)
  {
    for (ii = 1; ii <= 9; ii++)
    {
      printf("%02d:サンプル\n", i * ii);
    }
  }
  return 0;
}
