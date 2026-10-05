#include <stdio.h>

int main() {
     int resource_locked = 0;   

    if(resource_locked==0){
    
    printf("resource is free-task can access it");
        
        }
   else{

       printf("resource is locked-task must wait");
   }
    
    return 0;
}
