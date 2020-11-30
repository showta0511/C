#include <stdio.h>

int main(void)
{
  printf("オリンピック開催年を表示\n西暦を入力してください:");
  int year;
  scanf("%d",&year);
  if (year < 1900)
  {
    printf("%d年はオリンピックがまだありません",year);
  }
  if (year % 4 == 0)
  {
    printf("西暦%d年はオリンピック開催年",year);
  }
  else
  {
    printf("西暦%d年はオリンピック開催年ではありません\n",year);
  }

  return 0;
}
