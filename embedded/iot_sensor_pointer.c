#include <stdio.h>

    struct sensor {
    int sensor_id;
    float temperature;
};
int main() {
    
    struct sensor s1 = {101, 28.5};
struct sensor *ptr = &s1;

    ptr->sensor_id;
    ptr->temperature;
    printf(" sensor id:%d\n temperature:%.2f",ptr->sensor_id,ptr->temperature);

   
    return 0;
}
