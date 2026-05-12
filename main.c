#include <stdio.h>
#include <string.h>

typedef struct {
  char model[20];
  int temperature;
  float voltage;
} Sensor_t;

void out(Sensor_t *s) {
  printf("--%s--\n", s -> model);
  printf("Temperature:%d C\n", s -> temperature);
  printf("Voltage:%.2f V\n", s -> voltage);
}

int high_temp(Sensor_t *sensors, int n) {
  int max_i = 0;
  int i;
  
  for(i = 1; i < n; i++) {
    if(sensors[i].temperature > sensors[max_i].temperature) {
      max_i = i;
    }
    
  }
  return max_i;
  
}

int low_voltage(Sensor_t *sensors, int n) {
  int min_i = 0;
  int i;
  
  for(i = 1; i < n; i++) {
    if(sensors[i].voltage < sensors[min_i].voltage) {
      min_i = i;
    }
  }
  return min_i;
}

int main()
{
  Sensor_t sensors[3];
  
  // Sensor 1
  strcpy(sensors[0].model, "DHT11");
  sensors[0].temperature = 15;
  sensors[0].voltage = 3.2; 
  
  // Sensor 2
  strcpy(sensors[1].model, "BMP280");
  sensors[1].temperature = 25;
  sensors[1].voltage = 4.0;
  
  //Sensors 3
  strcpy(sensors[2].model, "DS18B20");
  sensors[2].temperature = 20;
  sensors[2].voltage = 3.0;
  
  
  // Out of all
  int i;
  for (i = 0; i < 3; i++) {
    out(&sensors[i]);
  } 
  
  // Hight temperature
  int idx = high_temp(sensors, 3);
  printf("\nHight temperature sensor: %s (%d C)\n",
  sensors[idx].model, sensors[idx].temperature);
  
  // Low voltage
  int idy = low_voltage(sensors, 3);
  printf("\nLow voltage sensor: %s (%.1f V)\n",
  sensors[idy].model, sensors[idy].voltage);
  
  return 0;
}
