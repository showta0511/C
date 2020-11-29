#include <stdio.h>

int main(void)
{
  /*
  出力変換指定子
  数値型を文字列に変換している
  */
  printf("%d円\n",100);

  printf("%d\n",(3+(10/2))*3);

  printf("%d/%d=%d...%d\n",40,13,40/13,40%13);
  return(0);
}
