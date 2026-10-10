#include <stdio.h>

int main() {
    
  int readings[5] = {42, 18, 65, 27, 51};
    int lowest=readings[0];

for(int i=0;i<5;i++){

   if(readings[i]<lowest){

       lowest=readings[i];
      
           }
}
 printf("Lowest Sensor Reading:%d",lowest);
    
    return 0;
}
