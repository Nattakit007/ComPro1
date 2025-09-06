#include <stdio.h>

int main()
{
  int x;
  printf("Enter a number (1-16) : ");
  scanf("%d", &x);
  if (x > 16 || x < 1)
  {
    printf("Out of range ! ! !\n");
    return 1;
  }
  else
  {
    for (int i = x; i >= 1; i--)
    {
      printf("%X", i);
    }
    printf("\n");
    for (int j = 0; j < x - 2; j++)
    {
      for (int k = 1; k < x; k++)
      {
        if(k == 1){printf("%X",x);}
        if(k == x-1)printf("1");
        else printf(" ");
      }
      printf("\n");
    }
    for (int i = x; i >= 1; i--)
    {
      printf("%X", i);
    }
  }
  return 0;
}
