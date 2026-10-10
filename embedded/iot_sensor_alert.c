
#include <stdio.h>

int main() {
    int sensor_value=60;
    int thershold=50;

    printf("sensor value=%d\n",sensor_value);

    if(sensor_value>thershold){
        
        printf("ALERT:thershold increase");
    }
    else{
        
        printf("NORMAL");
    }
    
    return 0;
}
