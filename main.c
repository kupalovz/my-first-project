#include <stdio.h>

  typedef struct {
    int harorat;
    int bosim;
    int namlik;
  } Sensor_t;
  
  void sensor(Sensor_t s) {
    printf("Harorat: %d C\n", s.harorat);
    printf("Bosim: %d hPa\n", s.bosim);
    printf("Namlik: %d %%\n", s.namlik);
  }
  
  int main(void){
    Sensor_t bmp280;
    bmp280.harorat = 30;
    bmp280.bosim = 1200;
    bmp280.namlik = 50;
    
    sensor(bmp280);
    
    return 0;
  }
