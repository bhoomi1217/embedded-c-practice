
#include <stdio.h>

int main()
{    int task_stack_size = 100;
     int stack_used = 60;
     
     if(stack_used < task_stack_size){
         printf("stack usage is safe");
     }
     else{
         printf("stack overflow");
     }
     
     return 0;
}
