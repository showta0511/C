#include <stdio.h>
#include <string.h>

int main(void)
{
  int array[100];

  int array_1[10] = {10, 20, 22};

  array[19] = 100; //20番目の変数に100を入れる
  printf("1:%d\n", array[19]);
  array[19]++;
  printf("1:%d\n", array[19]);
  printf("---------------------\n");

  printf("%d\n", array_1[0]);
  printf("%d\n", array_1[1]);
  printf("%d\n", array_1[2]);
  printf("%d\n", array_1[3]);
  printf("%d\n", array_1[4]);

  printf("---------------------\n");

  int array_2[] = {20, 29, 18};
  printf("%d\n", array_2[0]);
  printf("%d\n", array_2[1]);
  printf("%d\n", array_2[2]);

  printf("---------------------\n");

  int array_3[] = {20, 29, 18};

  for (int i = 0; i < 3; i++)
  {
    printf("%d\n", array_3[i]);
  }

  printf("---------------------\n");

  int array_4[] = {
      20,
      29,
      18,
      1,
      1,
      1,
      2,
      2,
      4,
      4,
      5,
      1,
      52,
  };

  int array_5[30] = {1, 2, 3, 4, 5};

  for (int i = 0; i < sizeof(array_4) / sizeof(array_4[0]); i++)
  {
    printf("%d\n", array_4[i]);
  }

  memcpy(array_5, array_4, sizeof(array_4));

  for (int i = 0; i < sizeof(array_5) / sizeof(array_5[0]); i++)
  {
    printf("array_5[%d]=%d\n", i, array_5[i]);
  }

  return 0;
}
