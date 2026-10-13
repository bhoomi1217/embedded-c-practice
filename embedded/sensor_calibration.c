#include <stdio.h>

float calibratesensor(float rawvalue){

    return rawvalue*0.1+2;
}

int main() {
    float raw_value=512;
    float status=calibratesensor(raw_value);
    printf("calibrated value:%.2f",status);
    
    return 0;
}
