#include <stdio.h>

int main(void)
{
  int *p, i;
  p = &i;
  *p = 10;
  printf("*p=%d\n", *p);
  printf("p=%p\n", p);
  printf("i=%d\n", i);
  printf("p=%p\n", &i);
  
  return 0;
}
