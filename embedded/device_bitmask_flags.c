
#include <stdio.h>

#define LED_FLAG   (1 << 0)
#define FAN_FLAG   (1 << 1)
#define ALARM_FLAG (1 << 2)

int main() {
    int status = 0;
    status = status | LED_FLAG;
    status = status | ALARM_FLAG;
    if (status & LED_FLAG) {
        printf("LED is ON\n");
    }
    if (status & ALARM_FLAG) {
        printf("Alarm is ON\n");
    }
    return 0;
}
