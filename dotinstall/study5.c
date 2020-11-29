/*
switch
あらかじめ候補が決まってるとき描きやすい
*/
#include <stdio.h>
int main(void)
{
  int rank = 10;
  switch (rank)
  {
  case 1:
    printf("gold\n");
    break;
  case 2:
    printf("silver\n");
    break;
  case 3:
    printf("bronze\n");
    break;
  default:
    printf("no...\n");
    break;
  }
}
