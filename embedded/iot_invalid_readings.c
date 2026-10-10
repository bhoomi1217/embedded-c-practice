#include <stdio.h>

int main() {
    
    int readings[5] = {25, -1, 40, -5, 60};
    int invalid_count=0;
    for(int i=0;i<5;i++){

       if( readings[i]<0){
           
      invalid_count++;
    }
}
printf("Invalid Sensor Reading:%d",invalid_count);

return 0;
}
