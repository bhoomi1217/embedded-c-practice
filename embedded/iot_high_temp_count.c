#include <stdio.h>

int countHighTemperatures(float temperatures[], int size){
    int count=0;
   for(int i=0;i<size;i++){
       
        if(temperatures[i]>30.00){
             count++;
          
        }
    }
    return count;
}
int main() {
    float temperatures[5] = {28.5, 32.5, 31.0, 26.8, 35.2};
    int status=countHighTemperatures(temperatures,5);
    printf("High Temperature Sensor:%d",status);
   
    return 0;
}
