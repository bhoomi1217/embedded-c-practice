#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "DEVICE_ON";

    if (strcmp(arr, "DEVICE_ON") == 0) {
        printf("Device turned ON\n");
    }
    else if (strcmp(arr, "DEVICE_OFF") == 0) {
        printf("Device turned OFF\n");
    }
    else {
        printf("Unknown command\n");
    }

    return 0;
}
