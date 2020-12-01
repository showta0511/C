#include <stdio.h>

int sum(int, int);

int main(void)
{
  int value;
  value=sum(200, 800);
  printf("%d\n",value);
  return 0;
}

int sum(int max, int min)
{
  int answer;
  answer=(max + min) * 100 / 23;
  return answer;
}
