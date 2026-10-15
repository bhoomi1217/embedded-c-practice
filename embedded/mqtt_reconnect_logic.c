#include <stdio.h>

int main() {
    int connected = 0;
    int attempts = 0;
    int max_attempts = 3;

    while (connected == 0 && attempts < max_attempts) {
        attempts++;

        printf("Attempting to connect...\n");

        if (attempts == 3) {
            connected = 1;
        }
    }

    if (connected == 1) {
        printf("Connected successfully!\n");
    }
    else {
        printf("Connection failed after 3 attempts.\n");
    }

    return 0;
}
