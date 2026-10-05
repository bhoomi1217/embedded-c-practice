#include <stdio.h>

int main() {
    int task_state = 1;

    if(task_state==1){
      printf("the task is ready");
    }
    else if(task_state==2){
        printf("the task is running");
    }
    else{
        printf("the task is blocked");
    }

    return 0;
}
