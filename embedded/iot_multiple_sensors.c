#include <stdio.h>

    struct sensor{
        int sensor_id;
        float temperature;
    };
   int main() {

       struct sensor sensors[3]={
           {101,28.5},
           {102,31.2},
           {103,26.8}
       };

        for(int i =0; i<3;i++){

           printf("sensor id:%d,Temperature:%.2f\n ", sensors[i].sensor_id,sensors[i].temperature);
           
        }

   
    return 0;
}
