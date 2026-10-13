#include <stdio.h>

#define LED_FLAG   (1 << 0)
#define FAN_FLAG   (1 << 1)
#define ALARM_FLAG (1 << 2)

int main() {

    int status = 7;
    status=status&~FAN_FLAG;
    printf("Updated Status:%d\n",status);
    
    if ((status & LED_FLAG)) {
    printf("LED IS ON\n");
    }
   if(status & ALARM_FLAG){
    printf("ALARM IS ON\n");
    }
    if(!(status & FAN_FLAG)){
        printf("FAN IS OFF\n");
    }
return 0;
}
