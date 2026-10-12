#include <stdio.h>
int checktemperature(float temperature){
    if (temperature>30){
        return 1;
    }
    else
    {
        return 0;
    }    
}
      int main(){
          float temperature=32.5;
          int status=checktemperature(temperature);
          if(status==1){
              printf("temperature is high");
          }
      else{
          printf("temperature is normal");
      }
    return 0;
      }
