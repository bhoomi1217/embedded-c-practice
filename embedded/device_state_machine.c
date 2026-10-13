#include <stdio.h>
enum state{
    off,
    idle,
    active
};
int main(){

    enum state current_status=active;
    switch(current_status){
        case off:
        printf("Device Is Switched OFF\n");
        break;

        case idle:
        printf("Device Is On But Waiting\n");
        break;

        case active:
        printf("Device Is Working\n");
        break;

        default:
        printf("this is unknown state\n");
        
    }
       return 0;
}
