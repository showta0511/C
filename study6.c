#include <stdio.h>

/*
戻り値あり関数
プロトタイプ宣言しておくとどこに書いてもその関数は呼ばれる*/
float getMax(float a, float b);
void sayHi(void);

/*
戻り値なし関数
引数なしにはvoid(空)を使う
*/
void sayHi(void)
{
  printf("hi!\n");
}

/*
mainも関数
*/
int main(void)
{
  float result;
  result = getMax(5.8, 5.2);
  printf("%f\n", result);
  sayHi();
  return 0;
}

/*
戻り値あり関数

三項演算子
通常のif文
返り値＝(条件) ? A:B;
*/
float getMax(float a, float b)
{
  /*
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
  */
 return(a>b)?a:b;
}

