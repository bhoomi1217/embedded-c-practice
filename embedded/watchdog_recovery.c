#include <stdio.h>

int main()
{  
     int system_responsive = 0;
     
     if(system_responsive==1){

         printf("system running");
     }
     else{
         printf("watchdog reset triggered");
     }
     
     return 0;
}
