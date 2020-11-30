#include <stdio.h>

int main(void)
{
  int score;
  printf("点数を入力してください\n=>");
  scanf("%d", &score);
  if (score > 100)
  {
    printf("点数が100点を超えています\n");
    score = 100;
    printf("100点に訂正しました\n");
  }
  printf("点数:%d\n", score);
  return 0;
}
