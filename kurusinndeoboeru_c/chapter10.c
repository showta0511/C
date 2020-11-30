#include <stdio.h>

int main(void)
{
  int price;
  double rate1, rate2, rate3, rate4;
  rate1 = 0.1;
  rate2 = 0.3;
  rate3 = 0.5;
  rate4 = 0.8;

  scanf("%d",&price);

  printf("%d\n",(int)(price*0.9));
  printf("%d\n",(int)(price*0.7));
  printf("%d\n",(int)(price*0.5));
  printf("%d\n",(int)(price*0.2));
  printf("%d\n",(int)(price-(price*rate1)));
  printf("%d\n",(int)(price-(price*rate2)));
  printf("%d\n",(int)(price-(price*rate3)));
  printf("%d\n",(int)(price-(price*rate4)));

  return 0;
}
