#include <stdio.h>

int main(void)
{
  //混合計算
  double left, right;
  left = 10;
  right = 3;
  printf("%f\n", left + right);
  printf("%f\n", right / left);
  //混合計算 整数と実数では実数になる
  printf("%f\n", 1.4 * 2);
  /*
  　この時整数にしたいというときは
    キャスト変換を使う
    強制的に型を変換する機能
  */
 printf("%d\n", (int)(1.4 * 2));
 //1.4 * 2これに（）をつける理由は先に1.4がキャストされて1になるから
  return 0;
}
