#include <stdio.h>

int main(void)
{
  int array[10];
  printf("array:(%p)\n", array);
  for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
  {
    printf("array[%d]:(%p) \n",i, &array[i]);
  }

  char str[256];
  scanf("%s",&str[0]);
  printf("%s\n",str);

  int in=221;
  printf("%d\n",in);

  char strl[256]="12345";
  scanf("%s\n",&strl[6]);
  printf("%s\n",strl);
  return 0;
}
