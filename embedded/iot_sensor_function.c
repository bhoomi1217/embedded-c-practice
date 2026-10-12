#include <stdio.h>

    struct sensor {
    int sensor_id;
    float temperature;
};
void displaysensor(struct sensor*ptr){
   
    printf("sensor id:%d\n Temperature:%.2f",ptr->sensor_id,ptr->temperature);
}
int main() {
    struct sensor s1={101,28.5};
     displaysensor(&s1); 
      
    return 0;
}
