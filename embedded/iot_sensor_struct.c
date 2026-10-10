#include <stdio.h>

    struct sensor1{

     int sensor_id;
     float temperature;
     int humidity;
};
    struct sensor1 s1;

int main(){

    s1.sensor_id=101;
    s1.temperature=28.5;
    s1.humidity=65;

    printf("Sensor ID: %d\nTemperature: %.2f\nHumidity: %d\n",
       s1.sensor_id, s1.temperature, s1.humidity);
    
return 0;
}
