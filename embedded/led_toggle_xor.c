#include <stdio.h>
int main(){

    int led=0;
    led=led^(1<<0);
    printf("LED STATUS:%d\n",led);
    led=led^(1<<0);
    printf("LED STATUS:%d",led);
    return 0;
}
