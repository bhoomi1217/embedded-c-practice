#include <stdio.h>

int main() { 
    
    unsigned char GPIO = 0;
    
   //setting 3 bit
    GPIO=GPIO|(1<<3);

    //clear 3 bit
    GPIO=GPIO&~(1<<3);

   //toggle bit 2
    GPIO=GPIO^(1<<2);

    printf("final result=%d",GPIO);

    
}
