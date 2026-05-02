#include <stdio.h>
// LED simulation
void led_on(void)
{
  printf("[LED] ON\n");
}

void led_off(void)
{
  printf("[LED] OFF\n");
}

// Checks and warns about temperature

void checks_temperature(int temp) 
{
  if (temp > 30)
  {
    printf("[WARNING] High temperature: %d C\n", temp);
    led_on();
    
  }else{
    
    printf("[OK] Normal temperature: %d C\n", temp);
    led_off();
  }
}


int main(void)
{
 checks_temperature(25);
 checks_temperature(35);
 return 0;
}