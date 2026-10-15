#include <stdio.h>

int main() {

    int temperature[]={25,27,29,65,28};
    int count=0;

    for(int i=0; i<5;i++){
        if(temperature[i]>40){
           count++;
            printf("Anamoly Detected At Index:%d %d c\n",i,temperature[i]);
        }
         }
    printf("Total anamolies:%d",count);
    
    return 0;
}
