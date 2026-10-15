#include <stdio.h>

struct info {
    char Device_ID[20];
    float Temperature;
    float Humidity;
};

int main() {
    struct info s1 = {"ESP32_01", 28.5f, 65.0f};

    printf("{\n");
    printf("device_id:%s\n", s1.Device_ID);
    printf("temperature:%.1f,\n", s1.Temperature);
    printf("humidity:%.1f\n", s1.Humidity);
    printf("}\n");

    return 0;
}
