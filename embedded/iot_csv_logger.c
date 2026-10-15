#include <stdio.h>

struct info {
    char Device_ID[20];
    float Temperature;
    float Humidity;
};

int main() {
    struct info sensors[] = {
        {"ESP32_01", 28.5, 65.0},
        {"ESP32_02", 31.2, 70.5},
        {"ESP32_03", 26.8, 58.0}
    };

    printf("Device_ID,Temperature,Humidity\n");

    for (int i = 0; i < 3; i++) {
        printf("%s,%.1f,%.1f\n",
               sensors[i].Device_ID,
               sensors[i].Temperature,
               sensors[i].Humidity);
    }

    return 0;
}



