#include <stdio.h>

int main()
{
    unsigned char GPIO = 0;
    
   //Setting bit 5
    GPIO= GPIO |( 1<<5 );

    //clear bit 5
    GPIO= GPIO &~ ( 1<<5 );

    printf("The final value=%d",GPIO);

    return 0;
}
