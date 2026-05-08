#include <stdio.h>

int main()
{
  //massiv 1
  int numbers1[5] = {10, 20, 30, 40, 50};
  //massiv 2
  int numbers2[5] = {34, 17, 89, 42, 55};
  
  int big = numbers2[0];
  int i;
  
  printf("Reverse order: ");
  
  //Reverse order
  for(i = 4; i >= 0; i--)
  {
    printf("%d ", numbers1[i]);
  }
  
  printf("\n");
  //Big number
  for(i = 1; i < 5; i++)
  {
    if(numbers2[i] > big)
    {
       big = numbers2[i];
    }
    
  }
  printf("Big num: %d\n", big);
  
  return 0;
}