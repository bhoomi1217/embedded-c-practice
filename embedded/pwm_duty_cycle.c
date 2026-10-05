#include <stdio.h>

int main()
{
    int on_time = 25;
    int total_time=100;
    float duty_cycle;

    duty_cycle = ((float)on_time/total_time)*100;

    printf("the duty cycle is=%.0f%%",duty_cycle);
    
    return 0;
}
