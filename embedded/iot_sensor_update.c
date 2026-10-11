#include <stdio.h>

struct sensor {
    int sensor_id;
    float temperature;
};

int main(void)
{
    int update_id = 102;
    float new_temperature = 29.5;

    struct sensor sensors[3] = {
        {101, 28.5},
        {102, 31.2},
        {103, 26.8}
    };

    for (int i = 0; i < 3; i++)
    {
        if (sensors[i].sensor_id == update_id)
        {
            sensors[i].temperature = new_temperature;
            break;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Sensor ID: %d, Temperature: %.2f\n",
               sensors[i].sensor_id,
               sensors[i].temperature);
    }

    return 0;
}
