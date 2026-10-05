#include <stdio.h>

int main()
{
    unsigned char GPIO = 0;
    
   //Setting bit 2, 5
    GPIO= GPIO |( 1<<2 );
    
    GPIO= GPIO |( 1<<5 );

    printf("the value is=%d\n",GPIO);

    //clear bit 2
    GPIO= GPIO &~ ( 1<<2 );

    printf("The final value=%d\n",GPIO);

    return 0;
}
