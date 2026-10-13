#include <stdio.h>

int main(){

    int register_value=7;
    register_value=register_value&~(1<<1);
    printf("REGISTER VALUE:%d",register_value);

    return 0;
}
