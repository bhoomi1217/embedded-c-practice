#include <stdio.h>

int main() {
    
   int readings[5] = {25, 70, 45, 90, 55};
    int threshold=60;
    int count=0;

for(int i=0;i<5;i++){

   if(readings[i]>threshold){

   count++;    

   }
   
}
printf("Reading Above Threshold:%d",count);
    
    return 0;
}
