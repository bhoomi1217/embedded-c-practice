#include <stdio.h>

int main() {

    float power;
    float energy;
    int voltage=12;
    float current=0.5;
    int operating_time=3;

     power=voltage*current;
    energy=power*operating_time;

    printf("power consumed:%.2f W\n",power);
    printf("energy consumed:%.2f W/H" ,energy);
    
    return 0;
}
