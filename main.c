#include <stdio.h>
int katta(int a, int b)
{
  if (a > b)
    {
       return a;
    }else{
      return b;
    }
}

int main()
{
    printf("%d\n", katta(5.6, 3));
    printf("%d\n", katta(2, 9));
    printf("%d\n", katta(4, 4));
    return 0;
}