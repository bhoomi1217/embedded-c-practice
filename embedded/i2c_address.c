
#include <stdio.h>

int main()
{    
    int device_address = 0x68;
    int target_address = 0x68;

    if(device_address == target_address){
        printf("I2C device found");
    }
    else{
        printf("I2C device not found");
    }

    return 0;
}
