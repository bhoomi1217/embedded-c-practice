#include <stdio.h>

#define LED_FLAG   (1 << 0)
#define FAN_FLAG   (1 << 1)
#define ALARM_FLAG (1 << 2)

int main() {

    int status = 5;
    status=status|FAN_FLAG;
printf("Updated Status:%d\n",status);
    
    if ((status & LED_FLAG)&&(status & ALARM_FLAG)&&(status&FAN_FLAG)) {
   
        printf("ALL DEVICES ARE ON\n");
    }
return 0;
}
