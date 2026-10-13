#include <stdio.h>

    enum DeviceState {
    DEVICE_OFF,
    DEVICE_ON,
    DEVICE_ERROR
};
int main(){
  enum DeviceState state=DEVICE_ON;
    switch (state){
        case DEVICE_OFF:
        printf("device is off");
        break;
        case DEVICE_ON:
        printf("device is on");
        break;
        case DEVICE_ERROR:
        printf("device has an error");
        break;
        default:
        printf("device is unknown");
        break;
    }
    return 0;
}
