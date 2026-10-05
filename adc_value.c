#include <stdio.h>

int main()
{
   float ADC_value ;
   float Input_voltage = 2.5 ;
   int Reference_voltage = 5 ;
      
    ADC_value = (Input_voltage / (float)Reference_voltage) * 1023;

        printf("the ADC value is=%.2f",ADC_value);
    
    return 0;
}
