/*
変数とはデータにつけるラベル

データ型
int(整数型）%d
float(実数) %f
char(1文字) %c
*/
#include <stdio.h> /*標準入出力の入ったファイル*/
int main(void)
{
  int x = 10;
  float y = 5.2;
  char c = 'A';

  printf("x=%d, y=%f, c=%c\n", x, y, c);
  return 0;
}
