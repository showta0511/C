#include <stdio.h>

int main(void)
{
    int min, max, sum;

  //入力
  printf("最小ちと最大値を, で区切って入力:");
  scanf("%d , %d", &min, &max);

  //計算
  sum = (min + max) * (max - min + 1) / 2;

  //表示部分
  printf("%d~%dの合計は %d です\n", min, max, sum);

  return 0;
}
