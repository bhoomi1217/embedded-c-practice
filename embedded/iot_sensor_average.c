#include <stdio.h>

int main() {
    
    int sensor1 = 40;
    int sensor2 = 50;
    int sensor3 = 60;
    int sum;
    float average;

    sum= sensor1+sensor2+sensor3;
    average= sum/3;

    printf("Total Sensor Reading:%d\n",sum);
    printf("Average Sensor Reading:%.2f",average);

    return 0;
}
