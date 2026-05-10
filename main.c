#include <stdio.h>
#include <string.h>

typedef struct {
  
  char marka[20];
  int speed;
  float oil;
  
} Car_t;


void car_info(Car_t m) {
  
  printf("Marka : %s\n", m.marka);
  printf("Speed: %d km/h\n", m.speed);
  printf("Oil: %.1f litr\n", m.oil);
}

int main(){
  
  Car_t characters1;
  
  strcpy(characters1.marka, "Nexia");
  characters1.speed = 250;
  characters1.oil = 20.49;
  
  Car_t characters2;
  
  strcpy(characters2.marka, "Cobalt");
  characters2.speed = 150;
  characters2.oil = 15.58;
  
  car_info(characters1);
  car_info(characters2);
  
  return 0;
}
