#include <stdio.h>

int main() {

    int arr[]={20,24,22,26,28};
    int sum=0;
    float average;
    for(int i=0;i<5;i++){

        sum+=arr[i];     
    }
    average=(float)sum/5;
    printf("Average Sensor Reading:%.2f",average);
    
    return 0;
}
