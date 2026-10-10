#include <stdio.h>

int main() {
    
    int sensor1 = 45;
    int sensor2 = 82;
    int sensor3 = 67;

    if(sensor1>sensor2){
        printf("Highest Sensor Reading:%d",sensor1);
    }
    else if(sensor2>sensor3){
        printf("Highest Sensor Reading:%d",sensor2);
    }
    else{
        printf("Highest Sensor Reading:%d",sensor3);
    }

    return 0;
}
