#include <stdio.h>
   struct sensor{
        int sensor_id;
        float temperature;
    };
   int main() {
       int found=0;
       int search_id=102;
       
       struct sensor sensors[3]={
           {101,28.5},
           {102,31.2},
           {103,26.8}
       };
        for(int i =0; i<3;i++){
            if(sensors[i].sensor_id == search_id){
                printf("sensor found!Temperature:%.2f",sensors[i].temperature);
                found=1;
                break;
            }
        }
 if(found==0){
         printf("sensor not found");
        }
  return 0;
}
