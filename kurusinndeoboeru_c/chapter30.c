#include <stdio.h>

void func(int *pvalue);

int main(void)
{
  int value = 10;
  printf("value=%d\n", value);
  printf("&value=%p\n", &value);
  func(&value); //アドレス指定
  printf("value=%d\n", value);
  return 0;
}

void func(int *pvalue) //通常モード
{
  printf("pvalue=%p\n", pvalue);
  *pvalue = 100;
  return;
}
