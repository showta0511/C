#include <stdio.h>

int main(void)
{
  /*配列*/
  int salse[3];
  salse[0]=22;
  salse[1]=2222;
  salse[2]=122;

/*
値を囲んで書く
要素数をおんなじににするときいらない
*/
  int salse2[]={1,2,3};

  printf ("%d\n%d\n%d\n",salse[0],salse[1],salse[2]);
  printf ("%d\n%d\n%d\n",salse2[0],salse2[1],salse2[2]);

  char salse3[]={"abc"};

  printf ("%c\n%c\n%c\n",salse3[0],salse3[1],salse3[2]);
  return 0;
}
