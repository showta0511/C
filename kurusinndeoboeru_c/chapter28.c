#include <stdio.h>
int main(void)
{
  //pがポインタ変数
  // iは＆演算子でアドレスを求めている
  //それを代入しているから pにiのアドレスが入ってるはず
  int *p, i;
  p = &i;

  printf("p=%p\n",p);
  printf("i=%p\n",&i);
  return 0;
}
