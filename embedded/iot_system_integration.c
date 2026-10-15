#include <stdio.h>

int main() {
    int temp[]={25,32,45,28};
    int count=0;
    int fan_state=0;

    for(int i=0;i<4;i++){
        if(temp[i]>40){
            printf("Temperature Is Anomalies:%d\n",temp[i]);
             count++;
        }
         if(temp[i]>=30){
       fan_state=1;
}
    else if(temp[i]<=25){
        fan_state=0;
    }
         printf("temperature:%d\n",temp[i]);
       
    if(fan_state==1){
          printf("Fan State:ON\n");
    }
     else if(fan_state==0){
         printf("Fan State:OFF\n");
     }
    }
    printf("total anamolies:%d\n",count);
    
    return 0;
}
